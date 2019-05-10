#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "athlete.h"
#ifndef FPLAYER_H
#define FPLAYER_H
class Football_player :public Athlete
{
	friend void to_fplayer(Football_player);
	friend Football_player from_fplayer();
	friend void up_fplayer();
public:
	Football_player(int, string, string, string, string, string);
	void set_number(int);
	void set_number();
	void set_position(string);
	void set_position();
	string get_number()const;
	string get_position()const;
private:
	int number;
	string position;
};
#endif // !FPLAYER_H

