#include "person.h"

string Person::getName() {
	return m_name;
}
void Person::setName(string name) {
	this->m_name = name;
}

int Person::getAge() { 
	return m_age; 
}

void Person::setAge(int age) {
	if (age > 0) {
		this->m_age = age;
	}
	else
		cout << "\t	 *Invalid age value!!!" << endl;
}

string Person::getCccd() { 
	return m_cccd; 
}

void Person::setCccd(string cccd) {
	if (std::stoi(cccd) > 0) {
		this->m_cccd = cccd;
	}
	else 
		cout << "\t	 *Invalid age value!!!" << endl;
}

string Person::getRoom()
{
	string temp;
	switch (m_typeRoom)
	{
	case 1:
		temp = "Type A - 500$";
		break;
	case 2:
		temp = "Type B - 300$";
		break;
	case 3:
		temp = "Type C - 100$";
		break;
	default:
		temp = "Invalid room type!";
		break;
	}
	return temp;
}

void Person ::setRoom (int typeRoom) {
	if (typeRoom != 1 || typeRoom != 2 || typeRoom != 3) {
		cout << "\t !!! Invalid room type" << endl;
	}
}


int Person::getNumberRental()
{
    return m_numberRental;
}

void Person::setNumberRental(int numberRental)
{
	if(numberRental > 0){
		this->m_numberRental = numberRental;
	}
	else 
		cout << "Invalid number of rental day!"<< endl;
}

void Person::inputInfor() 
{
	cout << "\t Enter full name: ";
	cin.ignore();
	getline(cin, m_name);
	do {
		cout << "\t Enter custumer's age: ";
		cin >> m_age;
		if(m_age < 0) {
			cout << "\t !!! Error: Age cannot be negative. Please enter again." << endl;
		}
	} while (m_age < 0);
	
	cout << "\t Enter custumer's ID: ";
	cin >> m_cccd;
	bool validRoomType = false;
	do {
		cout << "\t Enter customer's room type (enter 1, 2, 3 for room type A, B, C respectively): ";
		cin >> m_typeRoom;
		if (cin.fail()) { // Kiểm tra nếu nhập không thành công (ví dụ: nhập ký tự)
			cin.clear(); // Xóa trạng thái lỗi của cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bộ đệm của cin
			cout << "\t !!! Error: Invalid input. Please enter a number." << endl;
		} else if (m_typeRoom == 1 || m_typeRoom == 2 || m_typeRoom == 3) {
			validRoomType = true; // Loại phòng hợp lệ, thoát khỏi vòng lặp
		} else {
			cout << "\t !!! Error: Invalid room type. Please enter again." << endl;
		}
	} while (!validRoomType);

	// do {
    //     cout << "\t Enter customer's room type (enter 1, 2, 3 for room type A, B, C respectively): ";
    //     cin >> m_typeRoom;
    //     if(m_typeRoom != 1 && m_typeRoom != 3 && m_typeRoom != 2) {
	// 		cout << "\t !!! Error: Invalid room type. Please enter again." << endl;
	// 	}
    // } while (m_typeRoom != 1 && m_typeRoom != 3 && m_typeRoom != 2);
	// cout << "\t Enter custumer's room type (enter 1,2,3 for room type A,B,C respectively): ";
	// cin >> m_typeRoom;
	// setRoom(m_typeRoom);
	
	cout << "\t Enter number of days: ";
	cin >> m_numberRental;
	setNumberRental(m_numberRental);
}

void Person::displayInfor()
{
    cout << " - Information custumer: " << endl;
	cout << "\t Name: " << getName() << endl;
	cout << "\t Age: " << getAge() << endl;
	cout << "\t Cccd: " << getCccd() << endl;
	cout << "\t Room Type: " << getRoom() << endl;
	cout << "\t Number Rental: " << getNumberRental() << endl;
}
