#include "person.hpp"

Person::Person(std::string _id, std::string _name, int _age, int _num_day_rent, Room _room)
    :id {_id}, name {_name}, age {_age}, num_day_rent {_num_day_rent}, room {_room}
{

}
void Person::display_person()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Id: " << id << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Room: " << room << std::endl;
    std::cout << "Num day rent: " << num_day_rent << std::endl;
}
bool Person::operator==(const Person &rhs)
{
    return (this->id == rhs.id);
}

void Person::setNumrent(int numRent)
{
    this->num_day_rent = numRent;
}
// void Person::setRoom(Room room)
// {
//     this->room = room;
// }
void Person::setID(int id)
{
    this->id = id;
}

long long int Person::cal_money()
{
    return (num_day_rent * room.get_price());
}