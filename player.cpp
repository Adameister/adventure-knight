#include <iostream>
#include <string>
#include "player.h"

using namespace std;

void Player::createPlayer( string name ){
	// TODO: stuff
	playerName = name;
	// The default starting location for the player
	playerLocation = "Castel Gates";
}

void Player::setPlayerLocation( string name ){
	playerLocation = name;
}

string Player::getPlayerName( void ){
    return playerName;
}

string Player::getPlayerLocation( void ){
	return playerLocation;
}