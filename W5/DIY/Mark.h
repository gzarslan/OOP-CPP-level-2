//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/29
//==============================================
// Workshop : 5  DIY
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#ifndef SDDS_MARK_H_
#define SDDS_MARK_H_
#include <iostream>

namespace sdds {
    class Mark {
        int m_mark;  
        void setEmpty();
        bool isValid();
 
    public:
        Mark();
        Mark(int valueMark); 
        Mark& operator+=(int rightOperand);
        Mark& operator+=(Mark& RightOperand);
        Mark& operator=(int markVal);
        operator int()const;
        operator char()const;
        operator double()const;
     
    };
    int operator+=(int& cumOfContent, const Mark& rightOper);
}
#endif // SDDS_MARK_H_