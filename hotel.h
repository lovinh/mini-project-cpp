#pragma once

#include <vector>
#include "person.h"

using namespace std;

class Hotel {
private:
	vector<Person> m_customer;
	vector<int> m_price;
	int priceA, priceB, priceC;
public:
	Hotel() {
		m_price = { 500, 300, 100 };
	};
	~Hotel() {
        m_customer.clear();
        m_price.clear();
    }

	void addCustomer(Person& customer);
	void deleteCustomer(const string& cccd);
	void calculateRentalFee(const string& cccd);
	int getPrice(const string& typeRoom);
	void displayListCustomer();

};
