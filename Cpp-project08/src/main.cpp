// main.cpp
#include <iostream>
#include "utils.hpp"

int main() {

    using std::cout;

    runWorker();

    arrayFunc();

    createObjectFile();

    bool isRunning = true; // Variable to control the game loop

    promptUserStart(); // Call the function to prompt the user

    Player player1;
    player1.takeDamage();
    cout << "Player's health: " << player1.getHealth() << "\n";

    Enemy enemy1;
    enemy1.takeDamage();
    cout << "Enemy's health: " << enemy1.getHealth() << "\n";

    while (isRunning) 
    {
        promptUserContinue(); // Call the function to prompt the user
    }

    cout << "Main thread is finished! \n";

    return 0;
}