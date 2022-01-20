#include<iostream>

using namespace std;

int main()
{
    int i;

    cout << "Printing the odds and evens from 0 to 50 " << endl;
    for(i = 0; i <= 50; i++)
    {
        if(i % 2 == 0)
            cout << i << " is even " << endl;
        else
            cout << i << " is odd." << endl;
    }
    return 0;
    
}