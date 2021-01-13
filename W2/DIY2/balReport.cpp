// Workshop 2: 
// Version: 0.9
// Date: 09/25/2020
// Author: Fardad Soleimanloo
// Reviewed by: Michael Huang
// Description:
// This file tests the DIY section of your workshop
// Do not modify your code
/////////////////////////////////////////////

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

#include "Account.h"
using namespace sdds;
int main() {
    if (load("accounts_subtest.csv")) {
        display();
    }
    deallocateMemory();
    return 0;
}