#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() 
{
    srand(time(nullptr));

    int randomNumber, userGuess = -2;

    randomNumber = rand() % 100 + 1;

    while(randomNumber != userGuess)
    {
        cout << "Guess the correct number - " << endl;
        cin >> userGuess;

        if(userGuess > randomNumber)
        {
            cout << "Your guess is too high!" << endl;
        }

        else if(userGuess < randomNumber)
        {
            cout << "Your guess is too low!" << endl;
        }
        else
        {
            cout << "You have guessed the number correct!" << endl;
        }
    }
    return 0;
}