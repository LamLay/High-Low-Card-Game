/*************************************************************************
 * File Name:       High_Low.h
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
using namespace std;

// Since I am in charge of High Low Game, I will only include High Low files and the main driver. 
char beginHighLow();
char playAgainOrExit();
int getBet(Player& player1);
void playHighLow(Player& player1);


