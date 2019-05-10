#include <iostream>
#include <string>
#include <fstream>
#include"football player.h"
using namespace std;
#ifndef FTEAM_H
#define FTEAM_H
class Football_team
{
	friend void to_teams(Football_team);
	friend Football_team from_team();
	friend void up_teams();
public:
	Football_team(int, int, Football_player*, string, Person);

	int points()const;
	int get_team_size()const;
	string get_university()const;
	Football_player* get_footballers()const;
	Person get_coach()const;
	int get_wins()const;
	int get_losses()const;


	void set_team_size(int);
	void set_team_size();
	void set_coach(Person);
	void set_coach();
	void set_footballers(Football_player*, int);
	void set_footballers();
	void set_university(string);
	void set_universiyt();
private:
	int team_size;
	int stage;//32 16 8 4 2 1
	Football_player* footballers;//array
	string team_university;
	Person coach;
};
#endif // !FTEAM_H
