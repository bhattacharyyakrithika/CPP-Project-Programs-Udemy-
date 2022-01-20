#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string fullName, location;
    int initialScore;

    cout << "Please enter your initial score from 0 to 100 - " << endl;
    cin >> initialScore;

    cin.get(); //to consue the new line character

    cout << "Please enter your name- " << endl;
    getline(cin, fullName);

    cout << "Please enter your location- " << endl;
    cin >> location;

    cout << "Hello " << fullName << endl;
    cout << "We heard you are from " << location << endl;
    cout << "Your initial score is " << initialScore << " but your original score is 5 pts added " << (initialScore + 5) << endl;
}