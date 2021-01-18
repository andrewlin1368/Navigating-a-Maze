#include "MazePath.h"
#include <iostream>
#include <cassert>

int main()
{

    std::cout << "Welcome to the path reverser program.\n";
    char a;

    do
    {
        std::string input;

        std::cout << "Enter a path as a series of steps  (NSEW), press enter when done: ";
        std::getline(std::cin, input);

        MazePath m(input);
        m.directionsOut();

        std::cout << "The path is: " << input << "\n";
        std::cout << m << "\n";

        std::cout << "Another (Y/N)? ";
        std::cin >> a;
        std::cin.ignore();

    } while (a == 'Y' || a == 'y');
    return 0;
}