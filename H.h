#pragma once
#include <iostream>
using namespace std;
#include <string>
class Time
{
public:
	Time(int, int);
	void set_hours(int);
	void set_minutes(int);
	int get_hours()const;
	int get_hours()const;
private:
	int hours, minutes;
};
class Date
{
public:
	Date(int, int, int);
	void set_Date(int, int, int);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_year()const;
	int get_day()const;
	int get_month()const;
	void print()const;
private:
	int day, month, year;
};
class person
{
public:
	person(string, string,string);
	void set_name(string);
	void set_bdate(Date);
	string get_name()const;
private:
	string name;
	string ID;
};
class athlete:public person
{
public:
	athlete(string, string,string,string);
	void set_university(string);
	string get_university()const;
private:
	string university;
	string username;
	string password;
};
class football_player :public athlete
{
public:
	football_player(int, string, string, string);
	void set_number(int);
	void set_position(string);
	string get_number()const;
	string get_position()const;
private:
	int number;
	string position;
};

class tennis_player :public athlete
{
public:
	int points()const;
private:
	int wins;
	int losses;
};

class ping_pong_player :public athlete
{
public:
	int points()const;
private:
	int wins;
	int losses;
};

class football_team
{
public:
	football_team(string , string, string);
	int points()const;
private:
	football_player footballers[20];
	person coach;
	int wins;
	int losses;
	string team_university;
};
class tournament
{
public:

private:
	Time time;
	Date date;
};
class football_tournament :public tournament
{
public:
	football_team teams(int, int, int, int, int, int);
private:
	football_team teams[16];
};

class sport
{
public:

private:

};
class football :public sport
{
public:

private:

};

class tennis :public sport
{
public:

private:

};

class ping_pong :public sport
{
public:

private:

};