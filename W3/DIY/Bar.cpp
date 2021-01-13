//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/11
//==============================================
// Workshop : 3  DIY
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.



#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include "Bar.h"
using namespace std;

namespace sdds {
	
	void Bar::setEmpty() {

		m_title[0] = '\0';
		m_value = -1;


	}
	
	bool Bar::isValid()const {// if the bar is valid 
		bool ok = false;
		if (m_value > 0) {
			ok = true;
		}
		return ok;

	}

	void Bar::set(const char* title, char fill, int value) {
		if (value < 0 || value > 100) {
			setEmpty();
		}
		else {
			strcpy(m_title, title);
			
			m_fill = (fill);
			m_value = value;
				
		}


	}
	
	
	void Bar::draw()const {
		
		if (isValid() ){

			int i = 0;
			cout.width(20);
			cout.setf(ios::left);
			cout.fill('.');
			cout << m_title << "|";
			for (i = 0; i <m_value / 2; i++) {

				cout << (m_fill);

		    }
			cout << endl;
			cout.unsetf(ios::left);


		

		


			


		}
        


	}




}