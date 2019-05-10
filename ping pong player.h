#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "athlete.h"
#ifndef PPLAYER_H
#define PPLAYER_H
class ping_pong_player :public Athlete
{
	friend void to_pplayers(ping_pong_player);
	friend ping_pong_player from_pplayers();
public:
	ping_pong_player(int, int, int, string, string, string, string);
	int points()const;
	int get_wins()const;
	int get_losses()const;
	void set_wins();
	void set_losses();
	int get_stage()const;
	void set_stage(int);
private:
	int wins;
	int losses;
	int stage;
};
#endif // !PPLAYER_H

