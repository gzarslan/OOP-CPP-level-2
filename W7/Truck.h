#ifndef SDDS_TRUCK_H_
#define SDDS_TRUCK_H_
#include <iostream>
#include "Vehicle.h"

namespace sdds {
    class Truck : public Vehicle {
        double m_maxCapacity;
        double m_load;
     
    public:
        Truck(const char* platenumber, int year, double capacity, const char* destination);
        bool addCargo(double cargo);
        bool unloadCargo();
       
        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& in);
        
    };
    std::ostream& operator<<(std::ostream& os, const Truck& N);
    std::istream& operator>>(std::istream& istr, Truck& N);
}
#endif
