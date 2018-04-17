/*************************************************************************
 * File Name:       High_Low.cpp
 * Name:            Lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
#include <limits>    // for invalid input
#include "Deck.h"
#include "Player.h"
#include "High_Low.h"
using namespace std;

/*====================================================================
 * Main program
 */
// Since I am in charge of High Low Game, I will only include High Low files and the main driver. 

char beginHighLow() {
    char choice;
    
    cout << "Do you want to start the High Low card game?" <<endl;
    cout << "Press Y for 'Yes' and N for 'No'." << endl;
    cin >> choice; 
    
     while(choice != 'Y' && choice != 'N') {
         cin.clear();
         cin.ignore();
         cout << "Invalid choice." <<endl;
         cin >> choice;
    }
     
    // input the player's name and bet
    if (choice == 'Y') {
        cout << "------------------------------------------------------------------------------" << endl;
        cout << "Here are the rules of High Low:" << endl;
        cout << "There are 10 rounds total." << endl;
        cout << "For each correct round, you will win your bet. Then you can move on the next round." << endl;
        cout << "If your choice is incorrect, you will lose your bet." << endl;
        cout << "------------------------------------------------------------------------------" << endl;
    }
    return choice;
}

char playAgainOrExit() {
    char playAgain;
    // ask to play again or exit
    cout << "Do you want to (P)lay again or (E)xit? ";
    cin >> playAgain;
    
    // error check playAgain
    while(!cin || (toupper(playAgain) != 'P' && toupper(playAgain) != 'E')) {
        cin.clear();
        cin.ignore(100, '\n');
        cerr << "You didn't enter the correct value. Please re-enter: " << endl;
        cout << "Do you want to (P)lay again or (E)xit? ";
        cin >> playAgain;
    }
    return playAgain;
}    

int getBet(Player& player1) {
    int bet;
    //get bet
    cout << "Enter your bet $";
    cin >> bet;
    // error check bet
    while(!cin || bet <= 0 || bet > player1.getBalance()) {
        cin.clear();
        cin.ignore(100, '\n');
        cerr << "Invalid input. Try a positive number or a number smaller than your balance." << endl;
        cout << "Enter your bet $";
        cin >> bet;
    }
    return bet;
}
        
void playHighLow(Player& player1) {
    Deck dealer;
    bool winner = false;
    char hiLo, choice, playAgain;
    int index = 1;
    int bet;
    
    choice = beginHighLow();
    
    do{
        if (choice == 'N')
            return;
        
        dealer.draw();
        cout << player1.getName() << ", you have $" << player1.getBalance() << "." << endl;
        
        cout << "You draw a " << dealer.getHand(index) << endl;
            
        for (int i=0; i < 10 && winner == false; i++) {
            bet = getBet(player1);
                
            cout << "------------------------------------------------------------------------------" << endl;
            cout << "Do you think the next card will be higher or lower than your current card?" << endl;
            cout << "Press H for 'Higher' and L for 'Lower'." << endl;
            cin >> hiLo; 
                
            dealer.draw();
            dealer.getHand(index + 1);
            
            if (dealer.getHand(index+1) == dealer.getHand(index)) {
                cout << "You draw a " << dealer.getHand(index+1) << endl;
                cout << "It's a tie." << endl;
                cout << "Let's draw another card." << endl;                
                dealer.draw();
                dealer.getHand(index + 1);
            }
            else if ((hiLo == 'H' && dealer.getHand(index+1) > dealer.getHand(index)) || (hiLo == 'L' && dealer.getHand(index +1) < dealer.getHand(index))) {
                cout << "*********************************************************************" << endl;
                cout << "You draw a " << dealer.getHand(index+1) << endl;
                cout << "Congratulations! " << player1.getName() << ", you win the bet." << endl;
                    
                player1.setBalance(player1.getBalance() + bet);
                cout << "Your new balance is " << player1.getBalance() << endl;
                   
                if (i==9) {
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "*********************************************************************" << endl;
                    cout << "You have won the High Low card Game!" << endl;
                    winner = true;      
                }
            }
            else {
                cout << "You draw a " << dealer.getHand(index+1) << endl;
                cout << "I'm sorry. Your choice is incorrect. You lose your bet." << endl;
                player1.setBalance(player1.getBalance() - bet);
                cout << "Your new balance is " << player1.getBalance() << endl;
            }
            
            playAgain = playAgainOrExit();
                
            if (toupper(playAgain) != 'P'){
                cout << "Thank you for playing the High Low card game!" << endl;
                return;
            }
            
            index++;
        }  
    } while (winner == false && player1.getBalance() > 0); 
    cout << "Thank you for playing the High Low card game!" << endl;
}    
  
