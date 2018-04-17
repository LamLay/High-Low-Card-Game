# CPTR 142: Casino Simulator Project
By: Lam, Travis, Ethan, Matthew

## Project Introduction

Our project was to create a minigame experience that anyone with or without prior game experience can play and have fun with.
We have four games you can play including blackjack, roulette, high/low, and a slow machine game. Our game strives
to be fun and entertaining for anyone who is looking to waste hours on a game.

## Known Bugs 
The error checking for the blackjack (bet) doesn't work for letters so you will enter an infinite loop if
you enter a letter.

## User Operation Instructions
User begins in the main menu and has an option to go to four seperate minigames.
User follows the games prompts to either win or lose and they can leave to the main menu or play again.

## Roulette:
- Once you enter the game you will be prompted to choose a spot on the table to bet on.
- You choose a spot and then it asks how much you would like to bet on that space.
- You can choose to place another bet or you can spin the wheel.
- When you spin the wheel it will display all bet and show them as wins or losses and how much you win/lose.
- It will give your current bank balance and ask if you would like to play again or return to main menu.

## High/Low:
- User draws a card and make a bet.
- The user will make a guess whether the next card is lower or higher than the previous card. 
- If his choice is correct, he will win the bet. Then he can move on to the next round.
- if his choice is incorrect, he will lose the bet.
- During the game, the user will be asked whether he wants to continue the game or not. 
- The game has 10 rounds total. 
- If the user has 0 balance, he will have to exit the game. 

## Blackjack:
- User inputs their bet
- Cards are delt to player and house
- Player can Hit (draw another card) 
- Stand (determine winner)
- Double (get delt a card and double current bet)
- Game will run until player is out of money or enters a -1 to exit

## Slots:
Once you enter the game, it will check if you actually have money before welcoming you. 
After the welcome, your balance will be displayed in the console. 
- You will then be promted to enter a bet. 
- The game will randomize a spin for the three wheels and then check to see if there are any wheels equal to each other. 
- If two are equal, your bet will be multiplied by two and added to your balance. 
- If all three are equal, your bet is multiplied by three before being added.
- If none are equal, you lose and your bet is subtracted from your balance. 
  After this is complete, the game is technically over. 
- You will be asked if you want to play again or exit with which you can respond with
  a 'P' or 'p' for play again and an 'E' or 'e' for exit. Exiting will return you to the main menu.