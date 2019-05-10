#include <string>
#include <fstream>
using namespace std;
#include "match.h"
#include "ping pong player.h"
#include "tournament.h"
#ifndef PPTOURNAMENT_H
#define PPTOURNAMENT_H
class ping_pong_Tournament :public Tournament
{
public:
	void show_Tournament()const;
	ping_pong_Tournament(Time, Date, ping_pong_player*, ping_pong_player*);
private:
	ping_pong_player* players;
	ping_pong_player* players_now;
};
#endif // !PPTOURNAMENT_H
