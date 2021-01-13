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

#ifndef SDDS_BAR_H_
#define SDDS_BAR_H_

namespace sdds {

	class Bar {
		
		char m_title[21];	
		char  m_fill;
	        int m_value=-1;
		
		
	
              

	public:
		void setEmpty();// a function set the bar empty state 
		void set(const char* title, char fill, int value);
		bool isValid()const;//a function that returns "if the Bar is valid or not"
		void draw()const;

		
	};
	

	


	
}
#endif // !SDDS_BAR_H_