#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H
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
#endif // !PERSON_H
