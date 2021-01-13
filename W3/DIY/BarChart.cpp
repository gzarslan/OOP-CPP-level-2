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
#include "BarChart.h"
using namespace std;

namespace sdds {

	BarChart* bc;  

	void BarChart::setEmpty() {
		m_title=nullptr;
		m_bar=nullptr;
	}
	bool BarChart:: isValid()const{
		bool ok= true;

		int i;
		for (i = 0; ok == true && i < m_noOfSamples; i++) {
			if (!m_bar[i].isValid()) {
				ok = false;
			}

		}
		return ok;

	}
	

	void  BarChart::Title()const {
		cout << m_title << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		
	}

	void  BarChart::footer()const {
		cout << "-----------------------------------------------------------------------" << endl;
	


	}

	void BarChart::init(const char* title, int noOfSamples, char fill){
		int i;
		m_noOfSamples = noOfSamples;
		m_bar = new Bar[m_noOfSamples];
		for (i = 0; i < m_noOfSamples; i++) {
			m_bar[i].setEmpty();
		}
		
		
		m_samplesAdded = 0;
		m_title = new char[strlen(title) + 1];
		strcpy(m_title, title);
		m_fill = fill;		



	}
	void BarChart::add(const char* bar_title, int value){
	
	
		if (m_samplesAdded <= m_noOfSamples) {
			m_noOfSamples = value;
			m_bar[m_samplesAdded++].set(bar_title, m_fill, value);
		
		
			
		}
		
	}
	void BarChart::draw()const{
	
		if (isValid()) {
			Title();
			int i;
			for (i = 0; i < m_noOfSamples; i++) {
				m_bar[i].draw();


			}
			footer();
		}
		else {
			cout << "Invalid Chart!" << endl;
		}

		
		
	
	}

	
	void BarChart::deallocate(){
	
		delete [] m_title;
		delete [] m_bar;
		
		m_title = nullptr;
		m_bar = nullptr;
		
	}
}





