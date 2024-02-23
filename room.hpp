#ifndef _ROOM_H_
#define _ROOM_H_

#include <iostream>
#include <string>

class Room
{
friend std::ostream &operator<< (std::ostream &os, const Room &rhs);
private:
    std::string type;
    int price;
public:
    Room(std::string _type = "", int _price = 0);
    std::string get_type() const {return type;}
    int get_price() const {return price;}
    void set_type(std::string _type);
    void set_price(int _price);
};

#endif