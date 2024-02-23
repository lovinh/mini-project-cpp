#include "Hotel.h"
void Hotel::addPerson(Person person) {
	people.push_back(person);
	cout << "Them thong tin khach hang thanh cong" << endl;
}
bool Hotel::deletePerson(string pId) {
	if (people.empty()) {
		cout << "Danh sach khach hang trong" << endl;
		return false;
	}
	vector<Person>::iterator it;
	for (it = people.begin(); it != people.end(); it++)
	{
		if (it->getPId() == pId) {
			it->display_p();
			cout << "Ban muon chac chan muon xoa thong tin khach hang nay!" << endl;
			cout << "Nhap 1 de xoa, 2 de bo qua" << endl;
			int tmp;
			cin >> tmp;
			if (tmp == 1) {
				people.erase(it);
				cout << "Xoa data khach hang thanh cong" << endl;
				return true;
			}
			if (tmp == 2) {
				cout << "Huy lenh xoa data khach hang" << endl;
				return false;
			}
		}
	}
	return false;
}
bool Hotel::check_cal_m(string pId) {
	if (people.empty()) {
		cout << "Danh sach khach hang trong" << endl;
		return false;
	}
	vector<Person>::iterator it;
	for (it = people.begin(); it != people.end(); it++)
	{
		if (it->getPId() == pId) {
			it->display_p();
			cout << "So tien can thanh toan: " << it->cal_money() << endl;;
			return true;
		}
	}
	cout << "Khong tim thay thong tin khach hang" << endl;
	return 0;
}
void Hotel::display_h() {
	cout << "Danh sach khach hang" << endl;
	cout << "====================================" << endl;
	vector<Person>::iterator it;
	for (it = people.begin(); it != people.end(); it++)
	{
		it->display_p();
		cout << "____________________" << endl;
	}
	cout << "====================================" << endl;
}
