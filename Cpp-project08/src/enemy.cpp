#include "utils.hpp"

void Enemy::takeDamage()
{
    health -= 10; // Decrease health by 10 when taking damage
}

int Enemy::getHealth()
{
    return health; // Return the current health of the enemy
}