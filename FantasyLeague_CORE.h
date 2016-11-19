/*
 * FantasyLeague_CORE.h
 *
 *  Created on: Oct 1, 2016
 *      Author: Erich Vickers, Rasool Bahu, Mikayel Koda
 */

#ifndef FANTASYLEAGUE_CORE_H_
#define FANTASYLEAGUE_CORE_H_


#include <iostream>
#include <string>
using namespace std;



class User
{
private:
	int user_id;
	string username;
	string password;
	bool admin;

public:
	User();
	User(string username_,string password_);
	void printUser();
	int getUser_ID();
	void setUser_ID(int total_users_);
	string getUser();
	void setUser(string username_);
	string getPassword();
	void setPassword(string password_);
	void setAdmin();
	~User();
};

class Player
{
private:
	string name;
	int stats[10] = {0};
	int player_id;

public:
	Player();
	Player(string name_,int stats_);
	string getPlayerName();
	void setPlayerName(string name_);
	int getPlayerStats();
	void setPlayerStats(int stats_[10]);
	int getPlayerID();
	void setPlayerID(int player_id);
	void printPlayer();
	~Player();
};

class Team
{
private:
	string name;
	int total_players;
	int team_id;
	int players[5];

public:
	Team();
	Team(string name_);
	string getTeamName();
	void setTeamName(string name_);
	int getTotal_Players();
	void setTotal_Players(int total_players_);
	int getTeamID();
	void setTeamID(int team_id_);
	void getTeamPlayers(int players_[5]);
	void setTeamPlayers(int players_[5]);
	void printTeam();
	~Team();

};



class League
{
private:
	int teams;
    string users;
    bool open;
    string league_name;

public:
    League();
    League(int teams_,string users_,bool open_,string league_name_);
    int getTeams();
    void setTeams(int teams_);
    bool getOpen();
    void setOpen(bool open);
    string getUsers();
    void setUsers(string users_);
    string getLeague_Name();
    void setLeague_Name(string league_name_);
    void printLeague();
    ~League();
};

class League_MGMT
{
private:
	League myLeague;
	Team myTeam;
	Player myPlayer[50];
	User myUser;
public:
	League_MGMT();
	void printUsers(struct UserNode *head);
	void printTeams(struct TeamNode *head);
	void setHead_User(struct UserNode *head);
	void setHead_Team(struct TeamNode *head);
	void addUser(struct UserNode *head,string username,string password);
	void addTeam(struct TeamNode *head,string team_name);
	bool login(struct UserNode *head,string username,string password);
	void randomPlayers();
	~League_MGMT();
};

struct UserNode
{
	User data;
	UserNode* next;
};

struct TeamNode
{
	Team data;
	TeamNode* next;
};

//LINKED LIST FUNCTION PROTOTYPES

void headNode_User(struct UserNode *head,User n);

void addNode_User(struct UserNode *head, User n);

bool searchNode_User(struct UserNode *head, string username,string password);

void printNode_User(struct UserNode *head);

void headNode_Team(struct TeamNode *head,Team n);

void addNode_Team(struct TeamNode *head, Team n);

void printNode_Team(struct TeamNode *head);

//END LINKED LIST FUNCTION PROTOTYPES

void update_web_stat();

void user_login(string& username_,string& password_,string username,string password,bool& logged_in);

void update_league_stat();

void myleague_stats();

void trade_release_menu();

void myleague_retire(int& retire_var,bool& myleague_loop);

void myleague_exit(bool& myleague_loop);

void mystats_display();

void userstats_display();

void playerstats_display();

void mystats_exit(bool& mystats_loop);

void join_a_league();

void create_a_league();

void joinleague_exit(bool& joinleague_loop);

void logoff(bool& logged_in);;

#endif /* FANTASYLEAGUE_CORE_H_ */
