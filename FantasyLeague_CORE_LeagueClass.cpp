/*
 * FantasyLeague_CORE_LeagueClass.cpp
 *
 *  Created on: Oct 3, 2016
 *      Author: Erich Vickers, Rasool Bahu, Mikayel Koda
 */
#include <iostream>
#include <string>
#include "FantasyLeague_CORE.h"
using namespace std;

//PRE:			class exists
//POST:			default values assigned to all class variables
//Description:	constructor for League class
League::League()
{
	teams=1;
	users="none";
	open=true;
	league_name="league0";
}

//PRE:			class exists,string exists,integer exists,bool exists
//POST:			default values assigned to certain class variables, values assigned to parameter variables
//Description:	creates unique League instance
League::League(int teams_,string users_,bool open_,string league_name_)
{
	teams=teams_;
	users=users_;
	open=open_;
	league_name=league_name_;

}

//PRE:			class exists
//POST:			returns total teams allowed in the league
int League::getTeams()
{
	return teams;
}

//PRE:			class exists, integer exists
//POST:			values assigned
//Description:	sets total teams allowed in league
void League::setTeams(int teams_)
{
	teams=teams_;
}

//PRE:			class exists
//POST:			returns if league is open
bool League::getOpen()
{
	return open;
}

//PRE:			class exists, bool exists
//POST:			values assigned
//Description:	sets if league is open
void League::setOpen(bool open_)
{
	open=open_;
}

//PRE:			class exists
//POST:			returns usersnames of users in league
string League::getUsers()
{
	return users;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	sets usernames of users in league
void League::setUsers(string users_)
{
	users=users_;
}

//PRE:			class exists
//POST:			returns usersnames of users in league
string League::getLeague_Name()
{
	return league_name;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	sets name of league
void League::setLeague_Name(string league_name_)
{
	league_name=league_name_;
}

//PRE:			class exists
//POST:			all elements printed on screen
//Description:	prints all values of class
void League::printLeague()
{
	cout << teams<<endl
			<<users<<endl
			<<open<<endl
			<<league_name<<endl;
}

//PRE:			class exists
//POST:			values assigned
//Description:	destructor
League::~League()
{

}
