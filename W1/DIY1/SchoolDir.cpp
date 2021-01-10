//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/09/27
//==============================================
// Workshop : 1 DIY
//==============================================
//I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments

#include <iostream>
#include <cstring>
#include "School.h"
using namespace std;
using namespace sdds;



void flushkeys();
bool yes();
int main()
{
    bool done = false;
    char schoolCode[6];
   loadSchool();
  
    cout << "Seneca School Extension search." << endl << endl;

    while (!done) {
    
        cout << "Enter the School code: ";
        cin >> schoolCode;
        flushkeys();
       displaySchoolwithExtension(schoolCode);
       
        cout << "Do another search? (Y)es: ";
        done = !yes();
        cout << endl;
    }
    cout << "Goodbye!" << endl;
    return 0;
}
// flushes the keyboard
void flushkeys() {
    while (cin.get() != '\n');
}

// returns true if user enter y or Y
bool yes() {
    char ch = cin.get();
    flushkeys();
    return ch == 'y' || ch == 'Y';
}




