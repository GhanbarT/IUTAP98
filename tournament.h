#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "match.h"
#ifndef TOURNAMENT_H
#define TOURNAMENT_H
class Tournament
{

public:
	Tournament(int, int, int, int, match*, string);
	Date get_date() const;
	int get_size()const;
	string get_id()const;
	match* get_matches()const;

	void set_date(Date);
	void set_date();
	void set_size(int);
	void set_size();
	void set_ID(string);
	void set_ID();
	void set_matches(match*);
	void set_matches();

	virtual void show_Tournament()const;

private:
	string ID;
	int Tournament_size;
	match* matches;
	Date date;
};
#endif // !TOURNAMENT_H

