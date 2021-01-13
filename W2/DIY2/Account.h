//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/4
//==============================================
// Workshop : 2  DIY
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.//





#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
#include "File.h"
#define DATAFILE "accounts_subtest.csv"

namespace sdds {

    struct Account {

        int a_accountNumber;
        double a_balance;
    };
    //sorts the dynamic array of students based on the GPA of the students.
    void sort();

    // loads a student structue with its values from the file

    bool load();
    // allocates the dyanmic array of students and loads all the file
    // recoreds into the array
    bool load(const char filename[]);

    // TODO: Declare the prototype for the display function that
    // displays a student record on the screen:

    void display(const Account& acc);

    // TODO: Declare the prototype for the display function that 
    // first sorts the students then displays all the students on the screen
    void display();


    void deallocateMemory();




}
#endif // SDDS_ACCOUNT_H_