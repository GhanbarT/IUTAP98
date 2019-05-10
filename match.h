#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "date.h"
#include "time.h"
#ifndef MATCH_H
#define MATCH_H
class match
{
	friend void to_matches(match);
	friend match from_matches();
	friend void up_matches(match);
public:
	match(string, string, string, Time, Date, string, string);
	string get_home()const;
	string get_away()const;
	string get_scores()const;
	string get_stage()const;
	Date get_date()const;
	Time get_time()const;
	string get_type()const;
	string get_status()const;

	void set_stage(string);
	void set_stage();
	void set_home(string);
	void set_home();
	void set_away(string);
	void set_away();
	void set_scores();
	void set_scores(string);
	void set_date(Date);
	void set_date();
	void set_time(Time);
	void set_time();
	void set_type(string);
	void set_type();
	void set_status(string);
	void set_status();
	void changeAll();
	void show_matches(string, int, int, int);
private:
	Time time;
	Date date;
	string home, away;
	string scores;
	string stage;
	string sport_type;
	string status;
};
#endif // !MATCH_H

