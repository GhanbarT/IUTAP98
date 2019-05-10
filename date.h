#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#ifndef DATE_H
#define DATE_H

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
#endif // !DATE_H

