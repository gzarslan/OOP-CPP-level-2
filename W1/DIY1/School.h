
//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/09/27
//==============================================
// Workshop : 1 DIY
//==============================================

#ifndef sdds_SCHOOL_H 
#define sdds_SCHOOL_H 
#include "File.h"


namespace sdds {
	struct School{
	char schoolCode[6];
	int  schoolExtension;
	};


	bool loadSchool();
	void displaySchool(const School* scp);
	void displaySchoolwithExtension(const char schoolCode[]);
	bool hasSchoolCode(const School* scp, const char code[]);

	
}
#endif

