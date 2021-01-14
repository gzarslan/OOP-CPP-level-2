#pragma once

//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/09/27
//==============================================
// Workshop : 1 DIY
//==============================================





#ifndef sdds_FILE_H 
#define sdds_FILE_H 

namespace sdds {

	bool openFile(const char filename[]);
	void closeFile();
	bool readSchoolCode(char schoolCode[]);
	bool readExtension(int* schoolExtension);

}

#endif 
