#include "Monster.hpp"
#include "Player.hpp"

// Constructor definition
Monster::Monster(std::string n, int h, int ap, int d) 
	: name(n), health(h), attackPower(ap), defense(d) { }


// Function to check if a monster is alive
bool Monster::isAlive() const {
	// Return true if the monster's health is above 0.
	return health > 0;
}


// Function to deal damage to another monster
int Monster::attack(Monster& target) {
	// Do damage calculations
	int damage = attackPower - target.defense;		// Temporary simple calculation for testing
	// Use this number to alter target's health accordingly
	return damage;
}

// Function to apply the damage to the monster's health
void Monster::takeDamage(int damage) {
	health -= damage;
	return;
}


// Getters for testing
int Monster::getHealth() {
	if (health < 0) return 0;
	return health;
}
int Monster::getDefense() {
	return defense;
}
int Monster::getAttackPower() {
	return attackPower;
}
std::string Monster::getName() {
	return name;
}