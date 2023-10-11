#include <iostream>

// tunables
const unsigned int smallRoom{25};
const unsigned int largeRoom{35};
const double tax{1.06};
const unsigned int days{30};

int main()
{
    int smallRoomsBooked{0};
    int largeRoomsBooked{0};
    int cost{0};

    std::cout << "Hello, Welcome to Frank's Capet Cleaning Service\n\n";
    std::cout << "How many small rooms would you liked cleaned? ";

    std::cin >> smallRoomsBooked;

    std::cout << "How many large rooms would you liked cleaned? ";

    std::cin >> largeRoomsBooked;

    std::cout << "Estimate for clesaning service\n";
    std::cout << "Number of small rooms: " << smallRoomsBooked << std::endl;
    std::cout << "Number of large rooms: " << largeRoomsBooked << std::endl;
    std::cout << "Price per small room: £" << smallRoom << std::endl;
    std::cout << "Price per large room: £" << largeRoom << std::endl;

    cost = (smallRoomsBooked * smallRoom) + (largeRoomsBooked * largeRoom);

    std::cout << "Cost: £" << cost << std::endl;
    std::cout << "Tax %: " << tax << std::endl;
    std::cout << "======================================\n";
    std::cout << "======================================\n";
    std::cout << "Total Estimate: £" << cost * tax << std::endl;
    std::cout << "This estimqte is valid for " << days << " days." << std::endl;

    return 0;
}