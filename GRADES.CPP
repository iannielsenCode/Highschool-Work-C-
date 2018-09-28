//Student: Ian Nielsen
//File Name: GRADES.CPP
//Last Updated: December 21st 2010
//I, Ian Nielsen, did not get help from anyone while working on this program.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    char file, file_2 first_name(10), last_name(10);
    int grade, counter, average;
    
    cout << "I will take the names of students, their grades, and send that to "
         << "another file including the average of each persons grades.\n"
         << "What file do you want to take the data from? :";
    cin >> file;
    cout << "What file do you want to input the data into? :";
    cin >> file_2;
    
    in.open("file");
    do
    {
    
        
        
