#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int jams, sum, extra_jams;
    char ch;

    cout << "Enter the Package you want to choose A, B, C - " << endl;
    cin >> ch;

    switch (ch)
    {
    case 'A':
    case 'a':

        cout << "Enter the number of jams - " << endl;
        cin >> jams;

        if(jams <= 2)
            sum = 8;
        else
        {
            extra_jams = jams - 2;
            sum = 8 + (extra_jams * 5);
            cout << "You have " << extra_jams << " extra jams, therefore there will 5$ addition for each extra jam!" << endl;
        }

        cout << "You owe $" << sum << endl;
        break;

    case 'B':
    case 'b':

        cout << "Enter the number of jams - " << endl;
        cin >> jams;

        if(jams <= 4)
            sum = 12;
        else
        {
            extra_jams = jams - 4;
            sum = 8 + (extra_jams * 4);
            cout << "You have " << extra_jams << " extra jams, therefore there will 4$ addition for each extra jam!" << endl;
        }

        cout << "You owe $" << sum << endl;
        break;

    case 'C':
    case 'c':

        cout << "Enter the number of jams - " << endl;
        cin >> jams;

        if(jams <= 6)
            sum = 15;
        else
        {
            extra_jams = jams - 6;
            sum = 8 + (extra_jams * 3);
            cout << "You have " << extra_jams << " extra jams, therefore there will 3$ addition for each extra jam!" << endl;
        }

        cout << "You owe $" << sum << endl;
        break;
    
    default:
        cout << "Wrong choice!";
        break;
    }

    return 0;
}
