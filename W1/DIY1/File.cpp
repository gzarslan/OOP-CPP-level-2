//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/09/27
//==============================================
// Workshop : 1 DIY
//==============================================




#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "File.h"
#include <stdio.h>

using namespace std;


namespace sdds
{

    FILE* fptr;



    bool openFile(const char filename[]) {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }

    // closes the data file
    void closeFile() {
        if (fptr) fclose(fptr);
    }

   
    // returns true if successful
    bool readSchoolCode(char schoolCode[]) {

        return fscanf(fptr, "%s", schoolCode) == 1;
    }

    
    // returns true if successful
    bool readExtension(int* schoolExtension) 
    {
        return fscanf(fptr, "%d)", schoolExtension) == 1;
    }

}