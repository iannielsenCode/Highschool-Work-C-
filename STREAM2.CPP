//Student: Ian Nielsen
//File: STREAM2.CPP
//Last Updated: December 6th 2010
//I, Ian Nielsen, only got help from Mr.Miskin when working on this program.

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void open(ifstream&, char[]);
//Precondition: The stream has been given a name.
//Postcondition: The file will open correctly, and will be corrected if it doesn't.

double read(ifstream&, double);
//Precondition: The file is open and connected by a stream.
//Postcondition: The function will read all the files values correctly
//except for -1, and will calculate the average of those numbers.

void print(char[], double);
//Precondition: The program has already calculated the average of the numbers.
//Postcondition: The program will display the average and the name of the file to the screen.

int main()
{
    ifstream input_integers;
    char file[20];
    double avg;
    
    open(input_integers, file);
    read(input_integers, avg);
    input_integers.close();
    print(file, avg);
    
    system("pause");
    return 0;
}

void open(ifstream& input_integers, char file)
{
     cout << "I will read the numbers from a file "
          << "and find the average of the numbers.\n"
          << "Please enter the name of the file:";
     cin >> file;
     
     input_integers.open("file");
     if(input_integers.fail()) //If the file fails to open then the program will prompt the following.
     {
          cout << "Input file opening failed.\n";
          exit(1);
     }  
}  

double read(ifstream& input_integers, double avg)
{
     int number, numbers, count;
     
     while(number != -1) //The program will read numbers from the file until a number is -1.
     {
          input_integers >> number;
          numbers = numbers + number;
          count++;
     }
     
     avg = numbers / count;
     return avg;
}
     
void print(char file, double avg)
{
     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(2);
     cout << "The average of the numbers in the file " << file
          << "is " << avg;
}
     
     
     
     
    
    
    
    
    

    
    
