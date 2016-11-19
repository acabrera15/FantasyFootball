//============================================================================
// Name        : FantasyLeague_CORE.cpp
// Author      : Erich Vickers, Rasool Bahu, Mikayel Koda
// Version     : 1.0
// Copyright   :
// Description : Skeleton of Fantasy League project
//============================================================================

#include <iostream>
#include <string>
#include "FantasyLeague_CORE.h"
using namespace std;





int main()
{
	//Variables
	bool power_on=true;			//While power_on is set to true the game will run
	bool logged_in=false;		//When set to true it will advance 1 menu down from the log in menu
	bool myleague_loop=false;	//When set to true it will advance 1 menu down from the league menu
	bool mystats_loop=false;	//when set to true it will advance 1 menu down from the stats menu
	bool joinleague_loop=false; //When set to true it will advance 1 menu down from the join league menu
	string username;			//default is "user"
	string username_;			//stores the users name
	string password_;			//stores the users password
	string password;			//default is "admin"
	int joinleague_menu;		//lets user choose what part of the menu they want to enter
	int mystats_menu;			//lets user choose what part of the menu they want to enter
	int retire_var;				//allows the user to retire from a league
	int main_menu;				//enters the main menu of the fantasy league program
	int myleague_menu;			//enters the myLeague menu
	int login_register;			//enters the user registration menu
	int total_users=2;			//the total amount of users the program can store
	update_web_stat();			//gets the stats of the players from the web

	struct TeamNode *team_head=new TeamNode;
	User myUser;
	struct UserNode *head=new UserNode;
	//headNode_User(head,myUser);
	//display(head);
	User Erich[2];	//sets user class variables for the total users in the program
	League myLeague;
	League_MGMT system;
	system.setHead_Team(team_head);
	system.setHead_User(head);
	system.printTeams(team_head);
	//Erich[5].setUser("1234");
	//Erich[5].setPassword("12345");
	//for (int i=0;i<10;i++)
	//{
	//	username_=Erich[i].getUser();
	//	cout << username_<<endl;
	//}


	system.randomPlayers();









	while (power_on==true)						//while true the program will run
	{
		//display(head);
		system.printUsers(head);
		cout 	<<"1. Login"<<endl				//log in menu
				<<"2. Create Account"<<endl
				<<"3. Erase Accounts"<<endl;

		cin >> login_register;					//the user inputed choice

		if (login_register==1)					//if the user inputed "1"
		{
			cout << "username: "<<endl;
			cin >> username;
			cout << "password: "<< endl;
			cin >> password;
			logged_in=system.login(head,username,password);
		}
		if (login_register==2)								//if the user inputs "2"
		{
			cout << "set username: "<<endl;
			cin >> username_;
			cout << "set password: "<<endl;
			cin >> password_;
			system.addUser(head,username_,password_);
			//Erich[5].setUser("1234");
			//Erich[5].setPassword("12345");

		}
		if (login_register==3)								//if the user inputs "3"
		{
			cout << "not functional"<<endl
					<<endl;
		}
		while (logged_in==true)
		{
			update_league_stat();
			cout 	<<"1. MyLeague"<< endl
					<<"2. MyStats"<<endl
					<<"3. Join a League"<<endl
					<<"4. Log Off"<<endl
					<<endl
					<<"Type Number + ENTER"<<endl;
			cin >> main_menu;										//cin the users menu choice
			if (main_menu==1)										// if the user inputs "1"
			{
			if (myLeague.getUsers()==Erich[0].getUser())
			{
				myleague_loop=true;
				while (myleague_loop==true)
				{
					cout << "1. View League Stats"<< endl
							<<"2. Trade/Release Players"<<endl
							<<"3. Retire from League"<<endl
							<<"4. Back"<<endl
							<<endl
							<<"Type Number + ENTER"<<endl;
					cin >> myleague_menu;
					if (myleague_menu==1)
					{
						myleague_stats();
					}
					if (myleague_menu==2)
					{
						trade_release_menu();
					}
					if (myleague_menu==3)
					{
						myleague_retire(retire_var,myleague_loop);
					}
					if (myleague_menu==4)
					{
						myleague_exit(myleague_loop);
					}
				}
			}
			}
			if (main_menu==2)
			{
				mystats_loop=true;
				while (mystats_loop==true)
				{
					cout << "1. MyStats"<< endl
							<<"2. Search User Stats"<<endl
							<<"3. Search Player Stats"<<endl
							<<"4. Back"<<endl
							<<endl
							<<"Type Number + ENTER"<<endl;
					cin >> mystats_menu;
					if (mystats_menu==1)
					{
						mystats_display();
					}
					if (mystats_menu==2)
					{
						userstats_display();
					}
					if (mystats_menu==3)
					{
						playerstats_display();
					}
					if (mystats_menu==4)
					{
						mystats_exit(mystats_loop);
					}
				}
			}
			if (main_menu==3)
			{
				joinleague_loop=true;
				while (joinleague_loop==true)
				{
					cout << "1. Join a League"<< endl
							<<"2. Create a League"<<endl
							<<"3. Back"<<endl
							<<endl
							<<"Type Number + ENTER"<<endl;
					cin >> joinleague_menu;
					if (joinleague_menu==1)
					{
						join_a_league();

					}
					if (joinleague_menu==2)
					{
						create_a_league();
					}
					if (joinleague_menu==3)
					{
						joinleague_exit(joinleague_loop);
					}
				}
			}
			if (main_menu==4)
			{
				logoff(logged_in);
			}
		}
	}
	return 0;
}
