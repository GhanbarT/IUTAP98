#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "athlete.h"
#ifndef TPLAYER_H
#define TPLAYER_H
class tennis_player :public Athlete
{
	friend tennis_player from_tplayers();
	friend void to_tplayers(tennis_player);
public:
	tennis_player(int, int, int, string, string, string, string);
	int points()const;
	int get_wins()const;
	int get_losses()const;
	int get_stage()const;

	void set_wins(int);
	void set_wins();
	void set_losses(int);
	void set_losses();
	void set_stage(int);
	void set_stage();

private:
	int wins;
	int losses;
	int stage;
};
#endif // !TPLAYER

