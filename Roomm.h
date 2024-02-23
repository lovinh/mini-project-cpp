#pragma once
#ifndef _ROOMM_H_
#define _ROOMM_H_
#include<iostream>
#include<string>
using namespace std;

class Roomm
{
private:
	int price;
	string roomType;
public:
	Roomm(string roomType = "", int price = 0);
	void setPrice(int price);
	void setRoomType(string roomType);
	int getPrice();
	string getRoomType();
	void display_r();
};
#endif // !_ROOMM_H_


