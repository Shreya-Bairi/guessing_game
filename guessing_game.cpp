#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to the GUESSING GAME !" << endl;
    cout << "Guess an number between 1 and 100."
            "Choose a level of Difficulty."
            "Choose wisely! For the level you choose decides the chances you get!"
            "GOOD LUCK!" << endl;

    cout << "\n\t\t\tChoose the level of difficulty. \n";
    cout << "1 for easy!\t"
            "2 for medium!\t"
            "3 for hard!\t"
            "0 to quit" << endl;

    // selecting difficulty
    int difficulty;
    cout << "Enter the number: ";
    cin >> difficulty;

    //generating random number
    srand (time(0));
    int secretnumber;
    secretnumber = (rand() % (100-1)+1);
    int guess;
    
    
    //EASY
    if (difficulty == 1)
    {
        cout << "You have 10 chances to find the secret number between 1 and 100.";
        int chancesleft;
        chancesleft = 10;

        for (int i=0; i < 11; i++)
        {
            cout << "\nEnter a number: ";
            cin >> guess;
          
            if (guess == secretnumber) {
                cout << "Well Done! You Won! " << guess << " is the secret number" << endl;
                break;
            }
            else {
                cout << "You guessed it wrong.\n";
                if (guess > secretnumber)
                {
                    cout << "Guess lower!\n";
                }
                else 
                {
                    cout << "Guess higher!\n";
                }
                chancesleft--;
                cout << chancesleft << " chances left" << endl;
                if (chancesleft == 0)
                {
                    cout << "You are out of chances!";
                    cout << "\nThe secret number is " << secretnumber<< endl;
                    cout <<"\nBetter luck next time!" << endl;
                    break;
                }
            }
        }
    }
    
    
}
