#include "room.hpp"

Room::Room(std::string _type, int _price)
    : type {_type}, price {_price}
{}

std::ostream &operator<< (std::ostream &os, const Room &rhs)
{
    os << rhs.type << " - " << rhs.price << "$";
    return os;
}
void Room::set_type(std::string _type)
{
    type = _type;
}
void Room::set_price(int _price)
{
    price = _price;
}

