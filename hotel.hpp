#ifndef _HOTEL_H_
#define _HOTEL_H_

#include <iostream>
#include <string>
#include <vector>
#include "person.hpp"


class Hotel
{
private:
    std::vector<Person> persons;
public:
    void add(Person per);
    bool del(std::string id);
    bool cal_money(std::string id);
    void display_list();
};


#endif