#include <iostream>

int main()
{
    int width;
    int length;

    std::cout << "Please enter the width of the room: ";
    std::cin >> width;
    std::cout << "Please enter the length of the room: ";
    std::cin >> length;
    std::cout << "The area of the room is " << width*length << " units" << std::endl;

    return 0; 
}