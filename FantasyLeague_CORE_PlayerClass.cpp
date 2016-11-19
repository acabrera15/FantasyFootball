/*
 * FantasyLeague_CORE_PlayerClass.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: Erich Vickers, Rasool Bahu, Mikayel Koda
 */
#include <iostream>
#include <string>
#include "FantasyLeague_CORE.h"
using namespace std;

//PRE:			class exists
//POST:			default values assigned to all class variables
//Description:	constructor for Player class
Player::Player()
{
	name="player";
	player_id=0;
}

//PRE:			class exists,string exists,double exists
//POST:			default values assigned to certain class variables, values assigned to parameter variables
//Description:	creates unique Player instance
Player::Player(string name_,int stats_)
{
	name=name_;
	stats[9]=stats_;
	player_id=0;
}

//PRE:			class exists
//POST:			returns player name
string Player::getPlayerName()
{
	return name;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	sets Player Name
void Player::setPlayerName(string name_)
{
	name=name_;
}

//PRE:			class exists
//POST:			returns player stats
int Player::getPlayerStats()
{
	return stats[9];
}

//PRE:			class exists, double exists
//POST:			values assigned
//Description:	sets Player stats
void Player::setPlayerStats(int stats_[10])
{
	for (int i=0;i<10;i++)
	{
		stats[i]=stats_[i];
	}
}

void Player::setPlayerID(int player_id_)
{
	player_id=player_id_;
}



int Player::getPlayerID()
{
	return player_id;
}

//PRE:			class exists
//POST:			all elements printed on screen
//Description:	prints all values of class
void Player::printPlayer()
{
	cout <<"name: "<< name<<endl
			<<"stats: ";
	for (int i=0;i<10;i++)
	{
		cout << stats[i] << " ";
	}
	cout << endl
			<<player_id<<endl
			<<endl;
}

//PRE:			class exists
//POST:			values assigned
//Description:	destructor
Player::~Player()
{

}



