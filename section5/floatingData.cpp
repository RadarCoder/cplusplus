#include <iostream>

int main()
{
    int intData;
    double doubleData;

    std::cout << "Please enter a decimal number: ";
    std::cin >> intData >> doubleData;
    //after the "." is seen by cin, it enters it into int. the rest of the 0.5 is floating in the buffer stream
    //cin picks up the buffer stream and places it into double data
    std::cout << "int data: " << intData << std::endl << "double data: " << doubleData << std::endl;
}