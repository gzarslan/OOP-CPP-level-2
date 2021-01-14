//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/22
//==============================================
// Workshop : 6  LAB
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.






#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "Numbers.h"
using namespace std;

namespace sdds {

    int numberOfRead;
    Numbers::Numbers() {
        setEmpty();
        m_isOriginal = false;
    }

    Numbers::Numbers(const char* filename) {
        setEmpty();
        m_isOriginal = true;
        setFilename(filename);
        m_numCount = numberCount();
        if (m_numCount == 0 || !load()) {
            delete[] m_numbers;
            delete[] m_filename;
            setEmpty();
            m_isOriginal = false;
        }
        else {
            sort();
        }
    }
    Numbers::Numbers(const Numbers& copy)
    {

        setEmpty();
        m_isOriginal = false;
        operator =(copy);

    }
    Numbers::~Numbers() {
        save();
        delete[] m_numbers;
        delete[] m_filename;
    }

    Numbers& Numbers::operator=(const Numbers& RO)
    {

        int i;

        delete[] m_numbers;
        m_numCount = RO.m_numCount;//assigning the new size 
        m_numbers = new double[m_numCount];


        for (i = 0; i < m_numCount; i++) {
            m_numbers[i] = RO.m_numbers[i];
        }
        return *this;
    }

    Numbers& Numbers::operator+=(double RO)
    {

        int i;
        double* temp;
        if (!isEmpty()) {


            temp = new double[m_numCount + 1];
            for (i = 0; i < m_numCount; i++) {
                temp[i] = m_numbers[i];
            }

            temp[m_numCount] = RO;
            m_numCount++;

              delete[] m_numbers;

            m_numbers = temp;

            sort();
        }
        return *this;
    }

    ostream& Numbers::display(ostream& ostr) const
    {


        if (isEmpty()) {
            ostr << "Empty list" ;
        }
        if ((!isEmpty())) {
            ostr << "=========================" << endl;

            if (m_isOriginal) {
                ostr << m_filename << endl;
            }
            else {
                ostr << "*** COPY ***"<<endl;
            }

            int i;
            for (i = 0; i < m_numCount; i++) {
                if (i == m_numCount - 1) {
                    ostr << m_numbers[i];
                }
                else {
                    ostr << m_numbers[i] << ", ";
                }
            }
            ostr << endl;
            ostr << "-------------------------" << endl;
            ostr << "Total of " << m_numCount << " number(s)" << endl;
            ostr << "Largest number:  " << max() << endl;
            ostr << "Smallest number: " << min() << endl;
            ostr << "Average :        " << average() << endl;
            ostr << "=========================";
        }
        return ostr;
    }

    bool Numbers::isEmpty() const {
        return m_numbers == nullptr;
    }

    void Numbers::setEmpty() {
        m_numbers = nullptr;
        m_filename = nullptr;
        m_numCount = 0;
    }
    void Numbers::setFilename(const char* filename) {
        delete[] m_filename;
        m_filename = new char[strlen(filename) + 1];
        strcpy(m_filename, filename);
    }
    void Numbers::sort() {
        int i, j;
        double temp;
        for (i = m_numCount - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (m_numbers[j] > m_numbers[j + 1]) {
                    temp = m_numbers[j];
                    m_numbers[j] = m_numbers[j + 1];
                    m_numbers[j + 1] = temp;
                }
            }
        }
    }

    int Numbers::numberCount()
    {
        ifstream filein("numbers.txt");
        char str;
        int  d = 0;
        while (filein.get(str)) {
            if (str == '\n') {
                d++;
            }
        }

        return d;
    }
    bool Numbers::load()
    {
        ifstream filein(m_filename);



        int i = 0;
        double temp;


        if (m_numCount > 0) {


            m_numbers = new double[m_numCount];


            while (filein) {
                filein >> temp;

                if (filein) {
                    m_numbers[i++] = temp;

                }



            }




        }

        return i == m_numCount;


    }
    bool Numbers::save()
    {
        bool m_isOriginal = true;
        int i;
        if (m_isOriginal || !isEmpty()) {


            ofstream fileout("numbers.txt");
            for (i = 0; i < m_numCount; i++) {
                fileout << m_numbers[i] << endl;
            }



        }



        return m_isOriginal;

    }



    double Numbers::average() const {
        double aver = 0.0;
        if (!isEmpty()) {
            for (int i = 0; i < m_numCount; i++)
                aver += m_numbers[i];
            aver = aver / m_numCount;
        }
        return aver;
    }
    double Numbers::min() const {
        double minVal = 0.0;
        if (!isEmpty()) {
            minVal = m_numbers[0];
            for (int i = 1; i < m_numCount; i++)
                if (minVal > m_numbers[i]) minVal = m_numbers[i];
        }
        return minVal;
    }
    double Numbers::max() const {
        double maxVal = 0.0;
        if (!isEmpty()) {
            maxVal = m_numbers[0];
            for (int i = 1; i < m_numCount; i++)
                if (maxVal < m_numbers[i]) maxVal = m_numbers[i];
        }
        return maxVal;
    }




    std::ostream& operator<<(std::ostream& os, const Numbers& N)
    {

        return N.display(os);
    }

    std::istream& operator>>(std::istream& istr, Numbers& N)
    {

        double x;
        istr >> x;
        N += x;



        return istr;
    }

}
