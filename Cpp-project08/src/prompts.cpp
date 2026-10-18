#include "utils.hpp"
#include <iostream>

void promptUserStart() 
{
    std::cout << "Welcome to the game!" << std::endl;
    std::cout << "You are a player with 100 health." << std::endl;
    std::cout << "An enemy has appeared with 50 health." << std::endl;
    std::cout << "Let's see how the battle goes!" << std::endl;
    std::cout << "Are you ready to start? (y/n): " << std::endl;

    char userInput;

    std::cin >> userInput;

    if (userInput == 'y' || userInput == 'Y')
    {
        std::cout << "Great! Let's begin the battle!" << std::endl;
    }
    else
    {
        std::cout << "Maybe next time! Exiting the game." << std::endl;
        exit(0); // Exit the program if the user is not ready
    }
}

void promptUserContinue() 
{
    std::cout << "Do you want to continue the battle? (y/n): " << std::endl;

    char userInput;

    std::cin >> userInput;

    if (userInput == 'y' || userInput == 'Y')
    {
        std::cout << "Continuing the battle!" << std::endl;
    }
    else
    {
        std::cout << "Ending the battle. Thanks for playing!" << std::endl;
        exit(0); // Exit the program if the user does not want to continue
    }
}