#include "Player.h"

#include <iostream>

using namespace std;

Player::Player() : maxHealth(100), currentHealth(100), attack(10), defence(5) {

}

void Player::reset() {
	setCurrentHealth(maxHealth);
	setAttack(10);
	setDefence(5);
}

void Player::showStats() {
	cout << "Player: \n";
	cout << "Health: \t" << getCurrentHealth() << endl;
	cout << "Attack: \t" << getAttack() << endl;
	cout << "Defence: \t" << getDefence() << endl << endl;
}
