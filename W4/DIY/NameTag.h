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

#ifndef SDDS_NAMETAG_H_
#define SDDS_NAMETAG_H_

namespace sdds {

	class NameTag {



		char* m_name;
		int m_extNumber;
		void setName(const char* Name);
		bool isEmpty();
		

	public:

		NameTag();
		~NameTag();
		NameTag(const char* name);
		NameTag(const char* name, int extension);
		NameTag& read();
		void print();






	};






}
#endif // !SDDS_NAMETAG_H_






#pragma once
