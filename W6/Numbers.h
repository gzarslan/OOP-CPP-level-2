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




#ifndef SDDS_NUMBERS_H_
#define SDDS_NUMBERS_H_




namespace sdds {
    class Numbers {
        double* m_numbers;
        char* m_filename;
        bool m_isOriginal;
        int m_numCount;
        bool isEmpty()const;
        void setEmpty();
        void setFilename(const char* filename);
        void sort();
        int numberCount();
        bool load();
        bool save();

    public:
        Numbers();
        Numbers(const char* filename);
        Numbers(const Numbers& copy);
        double average()const;
        double max()const;
        double min()const;
        ~Numbers();
        Numbers& operator=(const Numbers& RO);
        Numbers& operator+=(double RO);
        std::ostream& display(std::ostream& ostr) const;

    };
   std::ostream& operator<<(std::ostream& os,const Numbers& N);
   std::istream& operator>>(std::istream& istr, Numbers& N);
 }
   
#endif // !SDDS_NUMBERS_H_

