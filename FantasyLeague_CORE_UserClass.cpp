/*
 * FantasyLeague_CORE_UserClass.cpp
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
//Description:	constructor for User class
User::User()
{
	user_id=2;
	username="user";
	password="admin";
	admin=false;
}

//PRE:			class exists,strings exist
//POST:			default values assigned to certain class variables, values assigned to parameter variables
//Description:	creates unique User instance
User::User(string username_,string password_)
{
	user_id=2;
	username=username_;
	password=password_;
	admin=false;
}

//PRE:			class exists
//POST:			all elements printed on screen
//Description:	prints all values of class
void User::printUser()
{
	cout<<username<<endl<<password<<endl
			<<endl;
}

//PRE:			class exists
//POST:			returns total users
int User::getUser_ID()
{
	return user_id;
}

//PRE:			class exists, integer exists
//POST:			values assigned
//Description:	sets total user count
void User::setUser_ID(int user_id_)
{
	user_id=user_id_;
}

//PRE:			class exists
//POST:			returns username
string User::getUser()
{
	return username;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	changes username in User class
void User::setUser(string username_)
{
	username=username_;
}

//PRE:			class exists
//POST:			return password
string User::getPassword()
{
	return password;
}

//PRE:			class exists, string exists
//POST:			values assigned
//Description:	changes password
void User::setPassword(string password_)
{
	password=password_;
}

//PRE:			class exists
//POST:			values assigned to variables
//Description:	changes admin flag to true
void User::setAdmin()
{
	admin=true;
}

//PRE:			class exists
//POST:			values assigned
//Description:	destructor
User::~User()
{

}


