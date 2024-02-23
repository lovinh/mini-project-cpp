#include "Hotel.h"
using namespace std;

int main()
{
	int choise;
	string name;
	string pId;
	int age;
	int numberRent;
	string roomType;
	Roomm room;
	Hotel hotel;
	Person person;
	while (true) {
		cout << "======================================" << endl;
		cout << "Application Manager Candidate"<<endl;
		cout << "Enter 1: To insert person" << endl;
		cout << "Enter 2: To remove person by person ID" << endl;
		cout << "Enter 3: To calculator price by person ID" << endl;
		cout << "Enter 4: To show list infor" << endl;
		cout << "Enter 5: To exit" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "====== Insert person =======" << endl;
			cout << "Name: ";
			cin.ignore();
			getline(cin, name);
			cout << "Age: ";
			cin >> age;
			cout << "Person ID: ";
			cin.ignore();
			getline(cin, pId);
			do {
				cout << "Type room: ";
				cin >> roomType;
				if (roomType == "A") {
					room.setPrice(500);
					room.setRoomType(roomType);
					break;
				}
				if (roomType == "B") {
					room.setPrice(300);
					room.setRoomType(roomType);
					break;
				}
				if (roomType == "C") {
					room.setPrice(100);
					room.setRoomType(roomType);
					break;
				}
			} while (true);
			cout << "NumberRent: ";
			cin >> numberRent;
			person = { name, pId, numberRent, age, room };
			hotel.addPerson(person);
			break;
		case 2:
			cout << "====== Remove person =======" << endl;
			cout << "Enter person ID of customer : ";
			cin.ignore();
			getline(cin, pId);
			hotel.deletePerson(pId);
			break;
		case 3:
			cout << "====== Calculator money for person =======" << endl;
			cout << "Enter person ID of customer : ";
			cin.ignore();
			getline(cin, pId);
			hotel.check_cal_m(pId);
			break;
		case 4:
			cout << "====== List data =======" << endl;
			hotel.display_h();
			break;
		case 5:
			cout << "========== End program ==========";
			exit(0);
		}
	}
}
