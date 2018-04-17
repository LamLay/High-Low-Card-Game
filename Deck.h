#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <vector>
#include <stdlib.h>

class Deck{
    private:
        std::vector<int> hand;
        int handSize;
  
    public:
        Deck(){
            srand(time(NULL));
            handSize=0;
        }
        //enter a number for which crad you want from the hand
        //Returns the card in 'i' place of the hand
        int getHand(int i){ return hand[i-1];}
        
        //adds a random card to the end of the hand
        void draw();
        
        //will print out a list of all the cards in the hand
        void printHand();
        
        //returns a 'H''S''C''D' for the suit
        char cardSuit();
        
        //returns the sum of the hand
        int handTotal();
        
        //check for aces and reduce them
        void checkForAces();
};

#endif // DECK_H
