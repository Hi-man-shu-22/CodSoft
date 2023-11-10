
// TASK 1  Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    // random number generator with the current time

    srand(static_cast<unsigned int>(time(nullptr)));   

    int secretNumber = rand() % 100 + 1; // now generate a random number between 1 and 100

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!!!" << endl;
    cout << "Guess a Number between 1 and 100 :-" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low. Try again." << endl;
        }
        else
        {
            cout << "Too high. Try again." << endl;
        }
    }

    return 0;
}
