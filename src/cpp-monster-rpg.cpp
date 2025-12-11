#include <iostream>
#include <string>
#include <vector>
#include "Monster.hpp"
#include "Player.hpp"


int main()
{
	// Simple battle loop to test most functions

	// Two teams of monsters, each belonging to a player
	std::vector<Monster> team1;
	std::vector<Monster> team2;


	// One monster for each player
	Monster m1("Charmander", 10, 9, 5);
	Monster m2("Bulbasaur", 15, 5, 1);

	// Add the monsters to the  teams
	team1.push_back(m1);
	team2.push_back(m2);

	// Two players, akin to pokemon trainers
	// These are mainly just for show right now, but with SFML integration will have the trainer name
	// and sprite be displayed as well as dialogue
	// The teams are assigned to the players AFTER they are created
	Player p1("Brady", team1);
	Player p2("Cammie", team2);

	
	

	int i = 1;
	while (p1.isAlive() && p2.isAlive()) {
		Monster& monster1 = p1.getTeam()[0];
		Monster& monster2 = p2.getTeam()[0];

		std::cout << "TURN " << i << ":\n";

		std::cout << monster1.getName() << " attacks " << monster2.getName() << "!\n";
		int dmg = monster1.attack(monster2);
		monster2.takeDamage(dmg);
		std::cout << monster2.getName() << " took " << dmg << " points of damage!\n"
			<< "their health is now: " << monster2.getHealth() << "!\n";



		i++;
	}

	std::cout << "BATTLE COMPLETE!\n";


	return 0;
}

