#pragma once
#ifndef _HOTEL_H_
#define _HOTEL_H_
#include"Person.h"
#include<vector>
using namespace std;
class Hotel {
private:
	vector<Person> people;
public:
	void addPerson(Person person);
	bool deletePerson(string pId);
	bool check_cal_m(string pId);
	void display_h();
};
#endif // !_HOTEL_H_

