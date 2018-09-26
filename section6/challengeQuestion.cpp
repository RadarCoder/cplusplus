#include <iostream>

int main()
{
    const int smallRoomCost{25};
    const int largeRoomCost{35};
    int smallRoomCount{0};
    int largeRoomCount{0};

    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl << std::endl;
    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> smallRoomCount;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> largeRoomCount;
    std::cout << std::endl << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << smallRoomCount << std::endl;
    std::cout << "Number of large rooms: " << largeRoomCount << std::endl;
    std::cout << "Price per small room: $" << smallRoomCost << std::endl;
    std::cout << "Price per large room: $" << largeRoomCost << std::endl;

    int totalCost{(smallRoomCount*smallRoomCost)+(largeRoomCount*largeRoomCost)};
    double tax{totalCost*0.06};

    std::cout << "Cost: $" << totalCost << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Total Estimate: $" << totalCost + tax << std::endl;

    const int validationTime{30};

    std::cout << "This estimate is valid for " << validationTime << " days" << std::endl;

    return 0;

}