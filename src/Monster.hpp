#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <string>

class Monster {
private:
	std::string name;
	int health;
	int attackPower;
	int defense;

public:
	// Constructor
	Monster(std::string name, int health, int attackPower, int defense);

	// Function to check if Monster is alive (Health above 0)
	bool isAlive() const;

	// Function to deal damage to other monsters, does damage calculation
	int attack(Monster& target);

	// Function to apply said damage to a monster's health
	void takeDamage(int damage);
	
	// Some getters for testing ease of use
	int getHealth();
	int getDefense();
	int getAttackPower();
	std::string getName();


};



#endif