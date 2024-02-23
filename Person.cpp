#include "Person.h"
Person::Person(string name, string pId, int numberRent, int age, Roomm room) {
	this->name = name;
	this->pId = pId;
	this->numberRent = numberRent;
	this->age = age;
	this->room = room;
}
void Person::setName(string name) {
	this->name = name;
}
void Person::setPId(string pId) {
	this->pId = pId;
}
void Person::setRoom(Roomm room) {
	this->room = room;
}
void Person::setNumberRent(int numberRent) {
	this->numberRent = numberRent;
}
void Person::setAge(int age) {
	this->age = age;
}
string Person::getName() {
	return name;
}
string Person::getPId() {
	return pId;
}
int Person::getAge() {
	return age;
}
int Person::getNumberRent() {
	return numberRent;
}
Roomm Person::getRoom() {
	return room;
}

void Person::display_p() {
	cout << "Name: " << name << endl;
	cout << "Person Id: " << pId << endl;
	cout << "Age: " << age << endl;
	cout << "Room: ";
	room.display_r();
	cout << "number of rental days: " << numberRent << endl;
}

int Person::cal_money() {
	return numberRent * room.getPrice();
}
