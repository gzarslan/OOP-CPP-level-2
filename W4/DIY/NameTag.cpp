//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/16
//==============================================
// Workshop : 4  DIY
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//I have been helped on the print function(relating lines 143-150-161-179) one of the classmates by HongyoangGao.

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include<iomanip>
#include<cstring>
#include "NameTag.h"
using namespace std;

namespace sdds {

    void NameTag::setName(const char* tname) {//allocating memory
       

     if (tname != nullptr) {
            m_name = new char[strlen(tname) + 1];
            strcpy(m_name, tname);
            if (strlen(m_name) > 40) {
                m_name[40] = '\0'; // if the name is more than 40 char set null

            }
        }else {

            m_name = nullptr;

        }
        
}
    NameTag::NameTag() {   //for an emptytag

        m_name = nullptr;
        m_extNumber = 0;


    }
    NameTag::NameTag(const char* name) //constructor with name 
    {
        m_extNumber = 0;
        setName(name);
    }


    NameTag::NameTag(const char* name, int extension)//constructor with name and extension
    {

        setName(name);//setting name 
       
        m_extNumber = extension;
       



    }
    

    NameTag& NameTag::read()
    {

        char inputName[41];
        char yesNo; //char is to check input of yes or no
        int value = 0;
        
        cout << "Please enter the name: ";
        cin.getline(inputName, 41);
        if (cin.fail()) { 
            cin.clear();//clearing buffer
            cin.ignore(2000, '\n');
        }
        setName(inputName);

        cout << "Would you like to enter an extension? (Y)es/(N)o: " ;
        cin >> yesNo;
        cin.ignore();

        if (yesNo == 'y' || yesNo == 'Y') {
            cout << "Please enter a 5 digit phone extension: ";
            cin >> value;
            cin.ignore();

            while (value < 10000 || value > 99999) {
                cout << "Invalid value [10000<=value<=99999]: ";
                cin >> value;
                cin.ignore();
            };

            m_extNumber = value;// set the extension to value
         }
         else if (yesNo == 'n' || yesNo == 'N') {
           
            m_extNumber = 0; 
          

           
        }

      



        return *this;
    }



    bool NameTag::isEmpty() { //checking if its in the range and empty

        bool check = false;

        if (m_name == nullptr || m_extNumber > 99999 || (m_extNumber > 0 && m_extNumber < 10000)) {
            check = true;
            cout << "EMPTY NAMETAG!" << endl;
        }
        return check;
    }



  void NameTag::print() {

        if (!isEmpty()) {

          
            if (strlen(m_name)> 20)
            {
                cout << "********************************************" << endl;
                cout << "*                                          *" << endl;
                cout << "* "<<m_name;
                cout.width(42 - strlen(m_name)); 
                cout << '*' << endl;
                cout << "*                                          *" << endl;

                if (m_extNumber == 0) {

                    cout << "* Extension: N/A";
                    cout.width(44 - strlen("* Extension: N/A"));   
                    cout << '*' << endl;
                    cout << "*                                          *" << endl;

                    cout << "********************************************" << endl;


                }
                else
                {
                    cout << "* Extension: " << m_extNumber;
                    cout.width(39 - strlen("* Extension: "));
                    cout << "*" << endl;
                    cout << "*                                          *" << endl;
                    cout << "********************************************" << endl;

                }





            } 
            else {


                cout << "************************" << endl;
                cout << "*                      *" << endl;
                cout << "* "<< m_name;
                cout.width(22 - strlen(m_name));
                cout << '*' << endl;
                cout << "*                      *" << endl; 

                if (m_extNumber == 0) {

                    cout << "* Extension: N/A";
                    cout.width(22 - strlen("Extension: N/A"));
                    cout << '*' << endl; 

                    cout << "*                      *" << endl;
                    cout << "************************" << endl;


                }
                else
                {
                    cout << "* Extension: "  << m_extNumber;
                    cout.width(19 - strlen("* Extension: "));
                    cout << '*' << endl;
                    cout << "*                      *" << endl;
                    cout << "************************" << endl;

                }






            }



        }
    }


    NameTag :: ~NameTag() {

        delete[] m_name;
        m_name = nullptr;
    }




}




