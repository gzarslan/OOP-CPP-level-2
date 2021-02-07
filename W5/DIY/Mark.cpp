//==============================================
// Name:           gozde arslan
// Student Number: 150320190
// Email:          garslan@myseneca.ca
// Section:        NBB
// Date:           2020/10/29
//==============================================
// Workshop : 5  DIY
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mark.h"

using namespace std;
namespace sdds {
    void Mark::setEmpty() {
            m_mark = -1;     //set it is an impossible value
    }


    bool Mark::isValid() //checking range if isvalid
    {
        bool ok = false;
        if (m_mark >= 0 || m_mark <= 100) {
            ok = true;
        }



        return ok;
    }


    Mark::Mark() { //constructor

        m_mark = 0;

    }
    Mark::Mark(int valueMark)  //const with one argument
    {

 

            if (valueMark>=0 &&valueMark<=100) {

                m_mark = valueMark;

            }
            else { //if it is not valid
                setEmpty();

            }

        
    }
    Mark::operator int() const //type conversation
    {
       
        int mark=0;
      
        if (m_mark!=-1) {

            mark = m_mark;
        }
        

        return mark;
    }
    Mark& Mark::operator=(int markVal)
    {

            if (markVal <= 0 || markVal >= 100) {
                setEmpty();
            }
            else {

                m_mark = markVal;
            }
        
        return *this;
    }

   Mark& Mark::operator+=(int rightOperand)
   {

      
           if (m_mark!=-1 ) {

               m_mark += rightOperand;

               if (m_mark > 100) {
                   setEmpty();

               }
           }

     

        return *this;
   }




    Mark& Mark::operator+=(Mark& RightOperand)
    {
        int value = 60;
        if (m_mark != -1) { //if it is not empty
            value += m_mark;

        }
        return *this;
    }


    Mark::operator char() const  
    {

        
           char grd='X' ;
           if (m_mark > 0 && m_mark < 100) {
               if (m_mark >= 0 && m_mark < 50) {
                   grd = 'F';
               }
               else if (m_mark >= 50 && m_mark < 60) {
                   grd = 'D';
               }
               else if (m_mark >= 60 && m_mark < 70) {
                   grd = 'C';
               }
               else if (m_mark >= 70 && m_mark < 80) {
                   grd = 'B';
               }
               else if (m_mark >= 80 && m_mark <= 100) {
                   grd = 'A';
               }
           }
                      return grd;
    }

    Mark::operator double() const 
    {

        double i = 0.0;
        if (m_mark >= 0 && m_mark < 50)
        {
            i = 0.0;

        }
        else if (m_mark >= 50 && m_mark < 60) {
            i = 1.0;
        }
        else if (m_mark >= 60 && m_mark < 70) {
            i = 2.0;
        }
        else if (m_mark >= 70 && m_mark < 80) {
            i = 3.0;
        }
        else if (m_mark >= 80 && m_mark <= 100) {
            i = 4.0;
        }
        return i;
    }

   
   

  

    

   

   

    int operator+=(int& cumOfContent, const Mark& rightOper) //helper 
    {

        cumOfContent += int(rightOper);
        return cumOfContent;

        
       
    }

}