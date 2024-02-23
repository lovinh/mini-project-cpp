#include <iostream>
#include <list>
#include "person.hpp"
#include "hotel.hpp"
#include "room.hpp"
#include <algorithm>
#include <cctype>
#include <string>

int main() {
    int choice;
    std::string name;
    int age;
    std::string id;
    int num_day;
    std::string type_room;
    Hotel hotel;
    Room room;
    Person p;
    while (1)
    {
        std::cout << "=============================================" << std::endl;
        std::cout << "Application Manager Candidate" << std::endl;
        std::cout << "Enter 1: To insert person for rent" << std::endl;
        std::cout << "Enter 2: To remove person by id" << std::endl;
        std::cout << "Enter 3: To calculator price by id" << std::endl;
        std::cout << "Enter 4: To show infor" << std::endl;
        std::cout << "Enter 5: To exit:" << std::endl;
        std::cout << "My option: ";
        std::cin >> choice;
        std::cin.ignore();
        switch (choice)
        {
        case 1:
            std::cout << "======================Add======================" << std::endl;
            std::cout << "Enter name: ";
            getline(std::cin, name);
            std::cout << "Enter id: ";
            std::cin >> id;
            std::cout << "Enter age: ";
            std::cin >> age;
            do 
            {
                std::cout << "Enter type of room: ";
                std::cin >> type_room;
                std::transform(type_room.begin(), type_room.end(), type_room.begin(), ::toupper);
                if(type_room == "A")
                {
                    room.set_price(500);
                    room.set_type("A");
                    break;
                }
                else if(type_room == "B")
                {
                    room.set_price(300);
                    room.set_type("B");
                    break;
                }
                else if(type_room == "C")
                {
                    room.set_price(100);
                    room.set_type("C");
                    break;
                }
                else
                {
                    std::cout << "Invalid. Re-enter" << std::endl;
                }
            } while (true);
            std::cout << "Enter num of dayRent: ";
            std::cin >> num_day;
            p = {id, name, age, num_day, room};
            hotel.add(p);
            break;
        case 2:
            std::cout << "=====================Remove====================" << std::endl;
            do{
                std::cout << "Enter id to remove: ";
                std::cin >> id;
            }
            while(hotel.del(id) == false);
            break;
        case 3:
            std::cout << "======================Cal======================" << std::endl;
            do{
                std::cout << "Enter id to cal: ";
                std::cin >> id;
            }
            while (hotel.cal_money(id) == false);
            break;
        case 4:
            std::cout << "=====================Display=====================" << std::endl;
            hotel.display_list();
            break;
        case 5:
            return 0;
            break;        
        default:
            std::cout << "Invalid" << std::endl;
            break;
        }
    }
    return 0;
}