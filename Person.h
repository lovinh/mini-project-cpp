#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_
#include"Roomm.h"
using namespace std;
class Person
{
private:
	string name;
	string pId;
	int numberRent;
	int age;
	Roomm room;
public:
	Person(string name="", string pId = "",
		int numberRent = 0, int age =0, Roomm room = {});
	void setName(string name);
	void setPId(string pId);
	void setRoom(Roomm room);
	void setNumberRent(int numberRent);
	void setAge(int age);
	string getName();
	string getPId();
	int getAge();
	int getNumberRent();
	Roomm getRoom();
	void display_p();
	int cal_money();
};

#endif // !_PERSON_H_

