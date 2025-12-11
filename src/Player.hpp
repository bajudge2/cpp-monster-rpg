#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Monster.hpp"
#include <string>
#include <vector>


class Player {
private:
	std::string name;
	std::vector<Monster> team;



public:
	// Param'd Constructor 
	Player(std::string name, std::vector<Monster> team);

	// Function to see if player is "alive"
	// "Alive" means player has monsters and is able to keep fighting
	bool isAlive() const;


	// Getters
	std::vector<Monster>& getTeam();
	std::string getName();

};


#endif