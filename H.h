#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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

class Date
{
	friend ostream& operator<< (ostream&, const Date&);
public:
	Date(int, int, int);
	void set_Date(int, int, int);
	void set_day(int);
	void set_day();
	void set_month(int);
	void set_month();
	void set_year(int);
	void set_year();

	int get_year()const;
	int get_day()const;
	int get_month()const;
	void show_date();
private:
	int day, month, year;
};

class Person
{
public:
	Person(string, string, string);
	void set_name(string);
	void set_name();
	void set_ID(string);
	void set_ID();
	void set_password(string);
	void set_password();

	string get_ID()const;
	string get_password()const;
	string get_name()const;
private:
	string name;
	string ID;
	string password;
};

class Manager : public Person
{
	friend void up_manager();
	friend Manager from_manager();
public:
	Manager(string, string, string, string);
	~Manager();
	string get_sport_type() const;
	void set_sport_type(string);
	void set_sport_type();

private:
	string sport_type;
};

class Athlete:public Person
{
public:
	Athlete(string, string, string, string);
	string get_university()const;
	void set_university(string);
	void set_university();

private:
	string university;
};

class Football_player :public Athlete
{
	friend void to_fplayer(Athlete);
	friend Athlete from_fplayer();
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

class Football_team
{
	friend void to_teams(Football_team);
	friend Football_team from_team();
	friend void up_teams();
public:
	Football_team(int, int, Football_player*, string, Person);

	int points()const;
	int get_team_size()const;
	string get_university()const;
	Football_player* get_footballers()const;
	Person get_coach()const;
	int get_wins()const;
	int get_losses()const;


	void set_team_size(int);
	void set_team_size();
	void set_coach(Person);
	void set_coach();
	void set_footballers(Football_player*,int);
	void set_footballers();
	void set_university(string);
	void set_universiyt();
private:
	int team_size;
	int stage;//32 16 8 4 2 1
	Football_player *footballers;//array
	string team_university;
	Person coach;
};

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

class ping_pong_Tournament :public Tournament
{
public:
	void show_Tournament()const;
	ping_pong_Tournament(Time, Date, ping_pong_player*, ping_pong_player*);
private:
	ping_pong_player* players;
	ping_pong_player* players_now;
};

class match
{
	friend void to_matches(match);
	friend match from_matches();
	friend void up_matches(match);
public:
	match(string, string, string,Time,Date,string,string);
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
