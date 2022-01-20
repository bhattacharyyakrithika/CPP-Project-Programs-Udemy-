#include<iostream>
#include<string.h>

int main()
{
    std::string adj1, girlsName, adj2, occ1, placeName, clothing, hobby, adj3, occ2, boysName, mansName;

    std::cout << "Enter adjective 1 - " << std::endl;
    std::cin >> adj1;

    std::cout << "Enter GIRLS NAME - " << std::endl;
    std::cin >> girlsName;

    std::cout << "Enter adjective 2 - " << std::endl;
    std::cin >> adj2;

    std::cout << "Enter occupation 1 - " << std::endl;
    std::cin >> occ1;

    std::cout << "Enter PLACE NAME - " << std::endl;
    std::cin >> placeName;

    std::cout << "Enter CLOTHING - " << std::endl;
    std::cin >> clothing;

    std::cout << "Enter HOBBY - " << std::endl;
    std::cin >> hobby;

    std::cout << "Enter adjective 3 - " << std::endl;
    std::cin >> adj3;

    std::cout << "Enter occupation 2 - " << std::endl;
    std::cin >> occ2;

    std::cout << "Enter BOYS NAME - " << std::endl;
    std::cin >> boysName;

    std::cout << "Enter MANS NAME - " << std::endl;
    std::cin >> mansName;

    std::cout << "Your story is as follows - " << std::endl;

    std::cout << "There once was a " << adj1 << " girl named " << girlsName << " who was a " << adj2 << " " << occ1 << " in the kingdom of " << placeName << "." << " She loved to wear " << clothing << " and " << hobby << ". She wanted to marry the " << adj3 << " " << occ2 << " named " << boysName << " but her father , King " << mansName << " forbid her from seeing him!!!" << std::endl;
    
    std::cout << "Hope you liked the story!!!" << std::endl;
    return 0;
}