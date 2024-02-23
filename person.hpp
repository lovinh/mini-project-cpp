#ifndef _PERSON_H_
#define _PERSON_H_

#include <algorithm>
#include <iterator>
#include "room.hpp"

class Person
{
private:
    std::string id;
    std::string name;
    int age;
    int num_day_rent;
    Room room;
public:
    Person(std::string _id = 0, std::string _name = "", int _age = 0, int _num_day_rent = 0, Room room = {});
    void display_person();
    bool operator==(const Person &rhs);
    void setNumrent(int numRent);
    // void setRoom(Room room);
    void setID(int id);
    long long int cal_money();
};

#endif
