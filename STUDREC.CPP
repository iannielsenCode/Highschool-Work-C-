//Student: Ian Nielsen
//File Name: STUDREC.CPP
//Last Updated: February 4th 2010.
//I, Ian Nielsen, did not get any help while working on this program.

#include<iostream>
using namespace std;

class StudentRecord
{
      public:
             StudentRecord();
             StudentRecord(int);
             StudentRecord(int, int);
             StudentRecord(int, int, int);
             StudentRecord(int, int, int, int);
             double percent_quiz_calc();
             double percent_test_calc();
             char letter grade();
             double quiz_1;
             double quiz_2;
             double midterm_grade;
             double final_grade;
      private:
              double quiz_1_percent;
              double quiz_2_percent;
              double midterm_percent;
              double final_percent; 
              double quiz_total_percent;
              double total percent;
              char letter_grade;
}

int main()
{
    StudentRecord student;
    
    cout << "This program will take the two quiz scores, the midterm grade, "
         << "the final grade, and calculate their letter grade.\n"
         << "Type in the grade of the first quiz out of ten points: "
      
              
