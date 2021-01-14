/* Citation and Sources...


I have done all the coding by myself and only copied the code
that my professor provided to complete my workshops and assignments.

-----------------------------------------------------------*/
// Menu tester:
// Version: 1.0
// Date: 11/13/2020
// Author: Gozde Arslan/150320190
// Description: OOP- Workshop 7
// This file tests the Menu module of the project
/////////////////////////////////////////////



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
#include "Vehicle.h"

namespace sdds {
   

    Vehicle::Vehicle(const char* platenumber, int year)
    {
        strcpy(m_plateNumber, platenumber);
        m_year = year;
        strcpy(m_address, "Factory");
    }

    void Vehicle::moveTo(const char* address) { 

         cout.setf(ios::left);
       
          cout.width(8 - strlen(m_plateNumber));
        cout << "|" <<" "<< m_plateNumber << "|" << " |";
      
         cout.unsetf(ios::left);
        cout.width(20);
        cout.setf(ios::right);
        cout << m_address << " ---> ";
        cout.unsetf(ios::right);
        cout.width(20);
        cout.setf(ios::left);
        cout << address << "|" << endl;
        cout.unsetf(ios::left);



        strcpy(m_address, address);
    }

    ostream& Vehicle::write(ostream& os) const
   

    {
        os << "| " << m_year << "" << " | " << m_plateNumber << " | " << "" << m_address << "";
        return os;
    }

    istream& Vehicle::read(istream& in)
    {
        int builtYear;
        char plate[9];
        char address[64];

        cout << "Built year: ";
        in >> builtYear;
        cout << "License plate: ";
        in >> plate;
        cout << "Current location: ";
        in >> address;

        m_year = builtYear;
        strcpy(m_plateNumber, plate);
        strcpy(m_address, address);

        return in;
    }

    ostream& operator<<(ostream& os, const Vehicle& N) {
        N.write(os);
        return os;
    }
    istream& operator>>(istream& istr, Vehicle& N) {
        N.read(istr);
        return istr;
    }
}
