#include "utils.hpp"
#include <iostream>

void promptUserStart() 
{
    std::cout << "Welcome to the game!\n";
    std::cout << "You are a player with 100 health.\n";
    std::cout << "An enemy has appeared with 50 health.\n";
    std::cout << "Let's see how the battle goes!\n";
    std::cout << "Are you ready to start? (y/n): \n";

    char userInput;

    std::cin >> userInput;

    if (userInput == 'y' || userInput == 'Y')
    {
        std::cout << "Great! Let's begin the battle!\n";
    }
    else
    {
        std::cout << "Maybe next time! Exiting the game.\n";
        exit(0); // Exit the program if the user is not ready
    }
}

void promptUserContinue() 
{
    std::cout << "Do you want to continue the battle? (y/n): \n";

    char userInput;

    std::cin >> userInput;

    if (userInput == 'y' || userInput == 'Y')
    {
        std::cout << "Continuing the battle!\n";
    }
    else if (userInput == 'n' || userInput == 'N')
    {
        std::cout << "Ending the battle. Thanks for playing!\n";
        exit(0); // Exit the program if the user does not want to continue
    }
    else
    {
        std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
        promptUserContinue(); // Recursively call the function until valid input is received
    }
}