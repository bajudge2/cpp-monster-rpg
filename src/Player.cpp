#include "Player.hpp"
#include "Monster.hpp"

// Constructor def
Player::Player(std::string n, std::vector<Monster> t)
	: name(n), team(t) { }


// check to see if defeated
bool Player::isAlive() const {
	// loop through players team, running isAlive on all monsters
	// if ANY monster returns true, player is still alive
	for (auto member : team) {
		if (member.isAlive()) {
			return true;
		}
	}
	// No monsters are alive
	return false;

}


// Getters

std::vector<Monster>& Player::getTeam() {
	return team;
}
std::string Player::getName() {
	return name;
}