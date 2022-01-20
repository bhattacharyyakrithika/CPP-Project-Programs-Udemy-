#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    int i = 1, val;
    while(i <= 10)
    {
        val = rand() % 6 + 1;
        cout << "Value at - " << i << "    " << val << endl;
        i++;
    }
}