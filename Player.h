#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    int wins;
    int losses;
    std::string name;
    double balance;
    
    public:
        // PRE: None
        // POST: Displays player wins and loses
        void showStats();
        
        // PRE: None
        // POST: Returns player name
        std::string getName() {return name;}
        
        // PRE: None
        // POST: Returns player balance
        double getBalance() {return balance;}
        
        // PRE: None
        // POST: Adds passed in value to balance
        void modifyBalance(double);
        
        // PRE: None
        // POST: Sets intial balance
        void setBalance(double bal) {balance = bal;}
        
        // PRE: None
        // POST: initializes player name and balance
        Player(std::string newName, double newBal) {
            name = newName; 
            balance = newBal;
        }
};
#endif // PLAYER_H