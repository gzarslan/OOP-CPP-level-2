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



#ifndef SDDS_BARCHART_H_
#define SDDS_BARCHART_H_
#include "Bar.h"
namespace sdds {
	class BarChart {
		
	
		

		               
		char* m_title; //a character pointer to hold the dynamically allocated "title of the chart
		char m_fill;
		Bar* m_bar;//a Bar pointer to hold the dynamically allocated array of Bars.
		int m_noOfSamples;
		int m_samplesAdded;
		void setEmpty();
		bool isValid()const;
		void Title()const;
		void footer()const;

		
	public:
		void init(const char* title, int noOfSampels, char fill);
		void add(const char* bar_title, int value);
		void draw()const;
		void deallocate();
	};
}
#endif // !SDDS_BARCHART_H_
