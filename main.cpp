
#include <iostream>
#include <string>
#include "hotel.h"
#include "person.h"

using namespace std;

int main()
{
    Hotel hotel;
    int option = 0;
    string cccd;

    while (true) {
        cout << endl << " <========== MANAGER HOTEL ==========> " << endl
            << " - Enter 1: To insert person for rent." << endl
            << " - Enter 2: To remove a registered person by passport." << endl
            << " - Enter 3: To calculator price by passport." << endl
            << " - Enter 4: To display all persons in the register." << endl
            << " - Enter 5: To Exit." << endl;
    
        cout << endl << " Your Option: ";
        cin >> option;
    
        switch (option)
        {
        case 1: {// Insertion of new person to be rented
            cout << endl << " - OPTION 1: To insert person for rent." << endl;
            Person person;
            person.inputInfor();
            hotel.addCustomer(person);
            break;
        }
        case 2:
            cout << endl << " - OPTION 2:  To remove a registered person by passport." << endl;
            cout << "\t Enter customer's ID: ";
            cin >> cccd;
            hotel.deleteCustomer(cccd);
            break;

        case 3:
            cout << endl << " - OPTION 3:  To calculator price by passport." << endl;
            cout << "\t Enter customer's ID: ";
            cin >> cccd;
            hotel.calculateRentalFee(cccd);
            break;
        case 4: 
            cout << endl << " - OPTION 4:  To display all persons in the register." << endl;
            hotel.displayListCustomer();
            break;
        case 5: 
            exit(0);
        default:
            cout << "Invalid option! Please try again.";
            break;
        }
    }   

}

