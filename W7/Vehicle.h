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




#ifndef SDDS_VEHICLE_H__
#define SDDS_VEHICLE_H__

#include <iostream>

namespace sdds {
    class Vehicle {
        char m_plateNumber[9];
        char m_address[64];
        int m_year;
        //bool isValid();

      
    public:
        Vehicle(const char* platenumber, int year);
       
        //void unUsuable();
        void moveTo(const char* address);
        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& in);

       
        
    };


    std::ostream& operator<<(std::ostream& os, const Vehicle& N);
    std::istream& operator>>(std::istream& istr, Vehicle& N);
}
#endif
