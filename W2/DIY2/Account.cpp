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

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"
#include "File.h"


using namespace std;
namespace sdds {
    Account* accounts;
    int noOfAccounts;
    


    void sort() {
        int i, j;
        Account temp;
        for (i = noOfAccounts - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (accounts[j].a_balance > accounts[j + 1].a_balance) {
                    temp = accounts[j];
                    accounts[j] = accounts[j + 1];
                    accounts[j + 1] = temp;
                }
            }
        }
    }

    
    bool load(Account& acc) {
        
        bool ok = false;
        //int accountNumber;
     
            ok = read(acc.a_accountNumber) && read(acc.a_balance);
           
        return ok;
    }
     
    bool load(const char filename[]) {
        bool ok = false;
        int i = 0;
        if (openFile(filename)) {
            
            noOfAccounts = noOfRecords();
            accounts = new Account[noOfAccounts];


            for (i = 0;i < noOfAccounts; i++) {
                 load(accounts[i]);
            }


            if (ok) {
                cout << "Error: incorrect number of records read; the data is possibly corrupted" << endl;
            }
            else {
                ok = true;
            }
            closeFile();
        }
        else {
            cout << "Could not open data file: " << "students.csv" << endl;
        }
        return ok;
    }


    void display(const Account& acc) {

        cout << acc.a_accountNumber << ": " << " " << acc.a_balance << endl;
    }
   void display() {

        sort();
        cout << "Account#: Balance" << endl;
        int i, j;
        for (i = 0, j = 1; i < noOfAccounts; i++) {
            cout << j++ << ": ";
            display(accounts[i]);
        }


    }

    void deallocateMemory() {


        for (int i = 0; i < 12; i++) {

            delete[] accounts;
            accounts = nullptr;

        }
        



        


    }
}