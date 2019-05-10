#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "person.h"
#ifndef MANAGER_H
#define MANAGER_H

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
#endif // !MANAGER_H

