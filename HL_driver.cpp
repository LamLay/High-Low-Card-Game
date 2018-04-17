/*************************************************************************
 *
 * Group Project
 * 
 * File Name:       HL_driver.cpp
 * Name:            Lam Lay
 * Course:          cp1TR 142
 * Date:            January 11, 2018
 * 
 */
 
#include <iostream>  // for cin and cout
#include <string>
// #include <stdlib.h>  // for exit
#include <limits>    // for invalid input
#include "Deck.h"
#include "Player.h"
#include "High_Low.h"
#include "Deck.cpp"
#include "Player.cpp"
using namespace std;

/*====================================================================
 * Main program
 */

int main() {
    Player player1("name",100);
    char playerName[20];
    char choice;
    
    while(true){
        cout << "Enter your name: ";
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
    
    // choice = beginHighLow();
    playHighLow(player1);
    
    return 0;
} 