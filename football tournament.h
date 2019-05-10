#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "match.h"
#include "football team.h"
#include "tournament.h"
#ifndef FTOURNAMENT_H
#define FTOURNAMENT_H
class Football_Tournament :public Tournament
{
	friend void to_fTournament(Football_Tournament);
	friend Football_Tournament from_fToutnament();
	friend void up_fTournament();
public:
	Football_Tournament(Time, Date, Football_team*, Football_team*);
	Football_team* get_teams()const;
	Football_team* get_now()const;
	///Football_team teams(int, int, int, int, int, int);

	void set_teams(Football_team*, int);
	void set_teams();
	void set_team_now(Football_team*, int);
	void set_team_now();
	void show_Tournament()const;

private:
	Football_team* teams;
	Football_team* teams_now;
};
#endif // !FTOURNAMENT_H

