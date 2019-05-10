#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "person.h"
#ifndef ATHLETE_H
#define ATHLETE_H
class Athlete :public Person
{
public:
	Athlete(string, string, string, string);
	string get_university()const;
	void set_university(string);
	void set_university();

private:
	string university;
};
#endif // !ATHLETE_H

