/* Citation and Sources...


I have done all the coding by myself and copied the code
that my professor provided to complete my workshops and assignments.
however my addCargo function does not check exceeding capacity after adding cargo therefore I have been helped on the addCargo function(relating lines 47-51-52)  by Hongyoang Gao.


-----------------------------------------------------------*/
// Menu tester:
// Version: 1.0
// Date: 11/13/2020
// Author: Gozde Arslan/150320190
// Description: OOP- Workshop 7
// This file tests the Menu module of the project
/////////////////////////////////////////////




#include <iostream>
#include "Truck.h"
using namespace std;

namespace sdds {

   



    bool Truck::addCargo(double cargo)
    {
        bool addCargo = false;
        
      /* 
        if (m_load<=m_maxCapacity) {
            addCargo = true;
            m_load += cargo;
        }
        else if(m_load>m_maxCapacity){

            addCargo = false;
            m_load = m_maxCapacity;
           
        }*/
     
        if (m_load + cargo <= m_maxCapacity) {
            addCargo = true;
            m_load += cargo;
        }
        else if (m_load + cargo > m_maxCapacity && m_load != m_maxCapacity) {
            addCargo = true;
            m_load = m_maxCapacity;
        }
        return addCargo;
    }

    bool Truck::unloadCargo()
    {
        bool unloadCargo = false;

        if (m_load != 0) {
            m_load = 0;
            unloadCargo = true;
        }

        return unloadCargo;
    }




    Truck::Truck(const char* plateNumber, int year, double capacity, const char* destination) :Vehicle(plateNumber, year)//passing values from vehicles
    {
        m_load = 0.0;
        m_maxCapacity = capacity;
        moveTo(destination);


    }


   
    
   
    ostream& Truck::write(ostream& os) const {
        Vehicle::write(os);
        os << " | " << m_load << "/" << m_maxCapacity;
        return os;
    }

    istream& Truck::read(istream& in) {
        double capacity;
        double cargo;

        Vehicle::read(in);

        cout << "Capacity: ";
        in >> capacity;

        cout << "Cargo: ";
        in >> cargo;

        m_maxCapacity = capacity;
        m_load = cargo;

        return in;
    }

    ostream& operator<<(ostream& os, const Truck& N)
    {
        N.write(os);
        return os;
    }

    istream& operator>>(istream& istr, Truck& N)
    {
        N.read(istr);
        return istr;
    }

}