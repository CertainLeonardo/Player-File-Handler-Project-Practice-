// main.cpp
#include <iostream>
#include "utils.hpp"

int main() {

    FileHandler fileHandler("player_data");

    promptUserStart(); // Call the function to prompt the user

    Player player1;
    player1.takeDamage();
    std::cout << "Player's health: " << player1.getHealth() << std::endl;

    Enemy enemy1;
    enemy1.takeDamage();
    std::cout << "Enemy's health: " << enemy1.getHealth() << std::endl;

    promptUserContinue(); // Call the function to prompt the user

    return 0;
}