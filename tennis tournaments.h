#include <string>
#include <fstream>
using namespace std;
#include "match.h"
#include "tennis player.h"
#include "tournament.h"
#ifndef TTOURNAMENT_H
#define TTOURNAMENT_H
class tennis_Tournament :public Tournament
{
public:
	tennis_Tournament(Time, Date, tennis_player*, tennis_player*);
	tennis_player* get_tplayers();
	tennis_player* get_tplayer_now();


	void show_Tournament()const;

private:
	tennis_player* players;
	tennis_player* players_now;
};
#endif // !TTOURNAMENT_H

