#include "Deck.h"
#include <iostream> 
#include <vector>
#include <time.h>
#include <cstdlib>
using namespace std;


void Deck::draw(){
	int card = (rand()% 10)+1;
	if(card==1){card=11;}
	hand.push_back(card);
	handSize=hand.size();

}
void Deck::printHand(){
    for(int i=0;i<handSize;i++){
        cout << hand[i] << cardSuit() << " ";
    }
}
char Deck::cardSuit(){
	int card = (rand()% 4)+1;
	switch(card){
	    case 1: return 'H';
	    case 2: return 'S';
	    case 3: return 'D';
	    case 4: return 'C';
	}
}
int Deck::handTotal(){
    int total=0;
    for(int i=0;i<handSize;i++){
        total += hand[i];
    }
    return total;
}
void Deck::checkForAces(){
    for(int i=0;i<handSize;i++){
        if(handTotal()>21){
            if(hand[i]==11){
                hand[i]=1;
            }
        }else{
            break;
        }
    }
}