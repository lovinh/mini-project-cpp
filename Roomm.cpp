#include "Roomm.h"
using namespace std;

Roomm::Roomm(string roomType, int price) {
	this->price = price;
	this->roomType = roomType;
}

void Roomm::setPrice(int price) {
	this->price = price;
}
void Roomm::setRoomType(string roomType) {
	this->roomType = roomType;
}
int Roomm::getPrice() {
	return price;
}
string Roomm::getRoomType() {
	return roomType;
}

void Roomm::display_r() {
	cout << "Type room: " << roomType
		<< ", Price: " << price << endl;
}