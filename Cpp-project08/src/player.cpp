#include "utils.hpp"

void Player::takeDamage() 
{
    health -= 10;
}

int Player::getHealth() 
{
    return health;
}