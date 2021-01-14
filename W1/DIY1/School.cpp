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
#include "School.h"
#include <cstring>
#include <string>

/* line 54 and line 55 i have helped by oleksandr zhatukhin*/


using namespace std;


namespace sdds
{
    School school[24];
    const char phoneNum[18] = "416 491 5050";

    bool loadSchool() {
        School sc;

        int snum = 0; // number of movies read
        bool ok = true;
        if (openFile("schools.dat")) {
            while (ok && snum < 24) {
                ok = readSchoolCode(sc.schoolCode) &&
                    readExtension(&sc.schoolExtension);

                if (ok) school[snum++] = sc;
            }
            closeFile();

            //cout << " 416 491 50 50  " << school[0].s_ext << endl;
        }
        return snum == 24;


    }



   
    bool hasSchoolCode(const School* scp, const char schoolCode[]) {
        
        bool found = false;
        string structSchool = scp->schoolCode;/* line 54 and line 55 i have got helped by oleksandr zhatukhin*/
        string str = schoolCode; /* line 54 and line 55 i have helped by oleksandr zhatukhin*/

        if (structSchool.compare(str) == 0)
        {
            found = true;
        }

        return found;
    }

   
    void displaySchool(const School* scp) {
        
        cout << phoneNum << " " << "x" <<" "<< scp->schoolExtension << endl;
    }



    void displaySchoolwithExtension(const char schoolCode[]) {
        int i, j;
        for (i = 0,j=1; i < 24; i++) {
            if (hasSchoolCode(&school[i],schoolCode)) {
               
                displaySchool(&school[i]); //
                j++;
            }
        }
        if (j == 1)
        {
            cout << schoolCode << " School code not found!" << endl;
        }
            
    }
    
}


