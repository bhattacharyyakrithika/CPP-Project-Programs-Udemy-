#include<iostream>
#include<array>//Array Class

using namespace std;

int main()
{
    array<int, 10> multiplesOfTwoArray{};//Object of Array Class
    int i;

    for(i = 0; i < multiplesOfTwoArray.size(); i++)
    {
        multiplesOfTwoArray[i] = i * 2;
    }

    for(auto counter : multiplesOfTwoArray)//For Each Loop or range based or enhanced for loop, There are 3 types of for loops
    {
        cout << counter << "    ";
    }

    return 0;
}