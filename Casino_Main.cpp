/*************************************************************************
 *
 * Group Project: Casino Game
 * 
 * File Name:         Casino_Main.cpp
 * Names:             Ethan Myers, Matt DeChance, Lam Lay, Travis Stanger
 * Course:            CPTR 142
 * Date Created:      February 19, 2018
 * Last Modifyed:     Febuaray 19, 2018
 * Modifyed By:       Ethan Myers
 * 
 */

#include <string>   // for player name
#include <iostream> // for cout / cin
#include "Player.h" // for player info
#include "Deck.h"
#include "Slots.h"  // for slots game
#include "Blackjack.h" // Blackjack
#include "Roulette.h"
#include "High_Low.h"

using namespace std;

int mainMenu();

int main(){
    Slots slotsGame;

    
    cout << "|------------------------------|\n";
    cout << "|    Welcome to our Casino!    |\n";
    cout << "|       Enjoy your stay!       |\n";
    cout << "|------------------------------|\n";
    cout << "What is your name: ";
    Player player1("name",100);
    char playerName[20];
    
    while(true){
        cin.getline(playerName, 20);
        string name = playerName;
        Player temp(name, 100);
        player1=temp;
        if(!cin){
            cin.clear();
            cin.ignore(100, '\n');
            cerr << "Input Error, Try a shorter name" << endl;
        }
        else
            break;
    }
    
    
    while(true){
        int selection = mainMenu();
        switch (selection){
            case 1:
                blackjack(player1);
                break;
            case 2:                   
                Roulette(player1);
                break;
            case 3:
                playHighLow(player1);
                break;
            case 4:
                slotsGame.slotsGamePlay(player1);
                break;
            case 5:
                cout << "Your current balance is: $" << player1.getBalance() << endl;
                break;
            case 6:
                return 0;
                break;
            default:
                break;
        }
    } 
    
}

// Casino Games Menu
int mainMenu(){
    while(true){
        int selection = 0;
        cout << "|          Select One          |\n";
        cout << "|------------------------------|\n";
        cout << "|   1) Blackjack               |\n";
        cout << "|   2) Roulette                |\n";
        cout << "|   3) High / Low              |\n";
        cout << "|   4) Slots                   |\n";
        cout << "|   5) Check Balance           |\n";
        cout << "|   6) Exit                    |\n";
        cout << "|------------------------------|\n";
        cout << "Enter (1-6): ";
        cin >> selection;
        if (!cin || selection < 1 || selection > 6){
            cout << "Invalid Input! Please enter 1-6\n";
        } else{
            return selection;
        }
    }
}

void setUp(){
    cout << "|           Enter Your Name        |\n";
}