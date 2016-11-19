//============================================================================
// Name        : FantasyLeague_CORE.cpp
// Author      : Erich Vickers & Rasool Bahu & Mikayel Koda
// Version     : 1.0
// Copyright   :
// Description : Skeleton of Fantasy League project
//============================================================================

#include <iostream>
#include <string>
#include "FantasyLeague_CORE.h"
using namespace std;

void update_web_stat()
{
	cout << "Real Player Statistics Updated" << endl
			<<endl;
}



void user_login(string& username_,string& password_,string username,string password,bool& logged_in)
{
	cout << "username: "<<endl;
	cin >> username_;
		if (username_==username)
		{
			cout << "password: "<< endl;
			cin >> password_;
			if (password_==password)
			{
				cout << "Log In Successful"<<endl
						<<endl;
				logged_in=true;
			}
		}
}

void update_league_stat()
{
	cout << "League Settings Loaded" << endl
			<<endl;
}

void myleague_stats()
{
	cout << "Displaying Current League Leaderboard"<<endl
			<<endl;
}

void trade_release_menu()
{
	cout << "This is where you would trade or release players"<<endl
			<<endl;
}

void myleague_retire(int& retire_var,bool& myleague_loop)
{
	cout << "Are you sure you would like to retire from the current league?"<<endl
			<<"1. Yes"<<endl
			<<"2. No"<<endl
			<<endl
			<<"Type Number + ENTER"<<endl;
	cin >> retire_var;
	if (retire_var==1)
	{
		cout << "Retirement Successful"<<endl
				<<endl;
		myleague_loop=false;
	}
}

void myleague_exit(bool& myleague_loop)
{
	myleague_loop=false;
}

void mystats_display()
{
	cout << "Display all statistics from all leagues that you have been in"<<endl
			<<endl;
}

void userstats_display()
{
	cout << "Display all statistics from all leagues that other users have been in"<<endl
			<<endl;
}

void playerstats_display()
{
	cout << "Display all real player statistics from real life data"<<endl
			<<endl;
}

void mystats_exit(bool& mystats_loop)
{
	mystats_loop=false;
}

void join_a_league()
{
	cout << "Displays all leagues that are open for the user to join"<<endl
			<<endl;

}

void create_a_league()
{
	cout << "Create your own league for other users to join"<<endl
			<<endl;
}

void joinleague_exit(bool& joinleague_loop)
{
	joinleague_loop=false;
}

void logoff(bool& logged_in)
{
	cout << "Successfully Logged Off"<<endl
			<<endl;
	logged_in=false;
}
