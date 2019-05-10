#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time
{
	friend ostream& operator<< (ostream&, const Time&);
public:
	Time(int, int);
	void set_hour(int);
	void set_houre();
	void set_minute(int);
	void set_minute();
	int get_hours()const;
	int get_minute()const;
	void show_time();
private:
	int hour, minute;
};
#endif
