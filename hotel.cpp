#include "hotel.h"


void Hotel::addCustomer(Person& customer) {
	m_customer.push_back(customer);
	cout << endl << " ADDING CUSTOMERS SUCCESSFULLY!!! " << endl;
	customer.displayInfor();
	cout << " - Rental Fee = " << getPrice(customer.getRoom())*customer.getNumberRental() 
						<< "$ "<< endl;

}

void Hotel::deleteCustomer(const string& cccd) {
	if (m_customer.size() <= 0 ) { 
		cout << endl << " No customers exist" << endl;
		cout << " DELETE CUSTOMERS FAILED!!! " << endl;
		return;
	}
	for (size_t i = 0; i < m_customer.size(); i++) {
		if(m_customer[i].getCccd() == cccd) {
			m_customer[i].displayInfor();
			char temp;
			while (true) {
				cout << "Do you want to delete this customer? (y/n): ";
				cin >> temp;
				if (temp == 'y') {
					m_customer.erase(m_customer.begin() + i);
					cout << endl << " DELETE CUSTOMERS SUCCESSFULLY!!! " << endl;
					break;
				}
				else if (temp == 'n') {
					cout << " DELETE CUSTOMERS FAILED!!! " << endl;
					break;
				}
				else {
					cout << " ERROR: wrong syntax!!! " << endl;
				}
			}
			return;
		}
		else {
			cout << " Customer information does not exist!" << endl;
			cout << " DELETE CUSTOMERS FAILED!!! " << endl;
		}
	}
}

void Hotel::calculateRentalFee(const string& cccd)
{
	if (m_customer.size() <= 0) {
		cout << endl << " No customers exist" << endl;
		cout << " CALCULATE CUSTOMERS'S RENTAL FEE FAILED!!! " << endl;
		return;
	}
	for (size_t i = 0; i < m_customer.size(); i++) {
		if (m_customer[i].getCccd() == cccd) {
			m_customer[i].displayInfor();
			char temp;
			while (true) {
				cout << "Is customer information correct? (y/n): ";
				cin >> temp;
				if (temp == 'y') {
					cout << " - Rental Fee = " << getPrice(m_customer[i].getRoom())*m_customer[i].getNumberRental() 
						<< "$ "<< endl;
					cout << " CALCULATE CUSTOMERS'S RENTAL FEE SUCCESSFULLY!!! " << endl;
					break;
				}
				else if (temp == 'n') {
					cout << "  CALCULATE CUSTOMERS'S RENTAL FEE CUSTOMERS FAILED!!! " << endl;
					break;
				}
				else {
					cout << " ERROR: wrong syntax!!! " << endl;
				}
			}
			return;
		}
		else {
			cout << " Customer information does not exist!" << endl;
			cout << "  CALCULATE CUSTOMERS'S RENTAL FEE FAILED!!! " << endl;
		}
	}
}
int Hotel::getPrice(const string& typeRoom)
{
	int price;
	if (typeRoom == "Type A - 500$") { price = 500; }
	else if (typeRoom == "Type B - 300$") { price = 300; }
	else if (typeRoom == "Type C - 100$") { price = 100; };
	return price;
}

void Hotel::displayListCustomer() {
	cout << " List Customer" << endl;
	for (vector<Person>::iterator it = m_customer.begin(); it != m_customer.end(); ++it) {
        
		cout << " Customer " <<  distance(m_customer.begin(), it) + 1  << endl;
		it->displayInfor();
        cout << endl;
    }
}
