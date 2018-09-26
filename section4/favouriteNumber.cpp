#include <iostream>

int main()
{
    int favouriteNumber;
    std::cout << "What is your favourite number between 0 and 100? ";
    std::cin >> favouriteNumber;
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!, " << favouriteNumber << " is my favourite number!" << std::endl;
}