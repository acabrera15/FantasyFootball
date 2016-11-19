/*
 * FantasyLeague_CORE_TeamClass.cpp
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
//Description:	constructor for Team class
Team::Team()
{
	name="team name";
	total_players=5;
	team_id=0;
	for (int i=0;i<total_players;i++)
	{
		players[i]=i;
	}
}

//PRE:			class exists,string exists,integer exists
//POST:			default values assigned to certain class variables, values assigned to parameter variables
//Description:	creates unique Team instance
Team::Team(string name_)
{
	name=name_;
	total_players=5;
	team_id=0;
	for (int i=0;i<total_players;i++)
	{
		players[i]=i;
	}
}

//PRE:			class exists
//POST:			returns player name
string Team::getTeamName()
{
	return name;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	sets Team Name
void Team::setTeamName(string name_)
{
	name=name_;
}

//PRE:			class exists
//POST:			returns total players allowed on team
int Team::getTotal_Players()
{
	return total_players;
}

//PRE:			class exists, integer exists
//POST:			values assigned
//Description:	sets total players allowed on team
void Team::setTotal_Players(int total_players_)
{
	total_players=total_players_;
}

//PRE:			class exists
//POST:			all elements printed on screen
//Description:	prints all values of class

int Team::getTeamID()
{
	return team_id;
}

void Team::setTeamID(int team_id_)
{
	team_id=team_id_;
}

void Team::getTeamPlayers(int players_[5])
{
	for (int i=0;i<total_players;i++)
	{
		players_[i]=players[i];
	}
}
void Team::setTeamPlayers(int players_[5])
{
	for (int i=0;i<total_players;i++)
	{
		players[i]=players_[i];
	}
}

void Team::printTeam()
{
	cout <<"team name: "<< name <<endl
			<<"total players: "<<total_players<<endl
			<<"team id: "<<team_id<<endl
			<<"players on team: ";
	for (int i=0;i<total_players;i++)
	{
		cout << players[i]<<" ";
	}
	cout << endl
			<<endl;
}

//PRE:			class exists
//POST:			values assigned
//Description:	destructor
Team::~Team()
{

}
