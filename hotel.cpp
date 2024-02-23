#include "hotel.hpp"

void Hotel::add(Person per)
{
    persons.push_back(per);
}
bool Hotel::del(std::string id)
{
    std::vector<Person>::iterator it = std::find(persons.begin(), persons.end(), id);
    if(it != persons.end())
    {
        persons.erase(it);
        std::cout << "Remove success" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Not found" << std::endl;
        return false;
    }
}
bool Hotel::cal_money(std::string id)
{
    long long int money;
    std::vector<Person>::iterator it = std::find(persons.begin(), persons.end(), id);
    if(it != persons.end())
    {
        money = it->cal_money();
        std::cout << "Money to paid: " << money << std::endl;
        return true;
    }
    else
    {
        std::cout << "Not found" << std::endl;
        return false;
    }
}
void Hotel::display_list()
{
    int i = 1;
    for(auto &p: persons)
    {
        std::cout << "Person " << i << std::endl;
        p.display_person();
        std::cout << std::endl;
        i++;
    }
}