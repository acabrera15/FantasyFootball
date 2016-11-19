/*
 * FantasyLeague_CORE_LeagueMGMTCLass.cpp
 *
 *  Created on: Oct 13, 2016
 *      Author: Erich
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "FantasyLeague_CORE.h"
using namespace std;

void headNode_User(struct UserNode *head,User n)
{
	head->data = n;
	head->next =NULL;
}

void addNode_User(struct UserNode *head, User n)
{
	UserNode *newNode = new UserNode;
	newNode->data = n;
	newNode->next = NULL;

	UserNode *cur = head;
	while(cur)
	{
		if (cur->data.getUser_ID()>=newNode->data.getUser_ID())
		{
			newNode->data.setUser_ID(cur->data.getUser_ID()+1);

		}
		if(cur->next == NULL)
		{
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

bool searchNode_User(struct UserNode *head, string username,string password)
{
	UserNode *cur = head;
	while(cur)
	{
		if(cur->data.getUser() == username && cur->data.getPassword() == password)
			{
			cout << "Log In Successful"<<endl
					<<endl;
			return true;
			}
		cur = cur->next;
	}
	cout << "Log In Failed"<<endl
			<<endl;
	return false;
}

void printNode_User(struct UserNode *head)
{
	UserNode *list = head;
	while(list)
	{
		cout << list->data.getUser() << " "<< list->data.getPassword() << " "<< list->data.getUser_ID() << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}


void headNode_Team(struct TeamNode *head,Team n)
{
	head->data = n;
	head->next =NULL;
}

void addNode_Team(struct TeamNode *head, Team n)
{
	TeamNode *newNode = new TeamNode;
	newNode->data = n;
	newNode->next = NULL;

	TeamNode *cur = head;
	while(cur)
	{
		if (cur->data.getTeamID()>=newNode->data.getTeamID())
		{
			newNode->data.setTeamID(cur->data.getTeamID()+1);

		}
		if(cur->next == NULL)
		{
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}


void printNode_Team(struct TeamNode *head)
{
	TeamNode *list = head;
	while(list)
	{
		int players_[list->data.getTotal_Players()];
		list->data.getTeamPlayers(players_);
		cout << list->data.getTeamName() << " "<< list->data.getTotal_Players() << " "<< list->data.getTeamID() << " ";
		for (int i=0;i<list->data.getTotal_Players();i++)
		{
			cout<<players_[i];
		}
		list = list->next;
	}
	cout << endl;
	cout << endl;
}


League_MGMT::League_MGMT()
{
	League myLeague;
	Team myTeam;
	Player myPlayer[50];
	User myUser;
}

void League_MGMT::setHead_User(struct UserNode *head)
{
	headNode_User(head,myUser);
}

void League_MGMT::setHead_Team(struct TeamNode *head)
{
	headNode_Team(head,myTeam);
}

void League_MGMT::printUsers(struct UserNode *head)
{
	printNode_User(head);
}

void League_MGMT::printTeams(struct TeamNode *head)
{
	printNode_Team(head);
}

void League_MGMT::addUser(struct UserNode *head,string username,string password)
{
	User myUser1(username,password);
	addNode_User(head,myUser1);
}

void League_MGMT::addTeam(struct TeamNode *head,string team_name)
{
	Team newTeam(team_name);
	addNode_Team(head,newTeam);
}

bool League_MGMT::login(struct UserNode *head,string username,string password)
{
	return searchNode_User(head,username,password);
}

void League_MGMT::randomPlayers()
{
	for (int i=0;i<50;i++)
	{
		myPlayer[i].setPlayerID(i);
		int rndnum[10];
		for (int l=0;l<10;l++)
		{
			rndnum[l]=rand()%100;
		}
		myPlayer[i].setPlayerStats(rndnum);
	}
}

League_MGMT::~League_MGMT()
{

}
