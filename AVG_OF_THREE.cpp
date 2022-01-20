#include<iostream>

int main()
{
    double num1, num2, num3, avg;

    std::cout << "Enter 3 real no.s - " << std::endl;
    std::cin >> num1 >> num2 >> num3;

    avg = (num1 + num2 + num3) / 5;

    std::cout << "The AVG of the 3 real no. are = " << avg << std::endl;

    return 0;
}