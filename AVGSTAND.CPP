// Student: Ian Nielsen
// File Name: AVGSTAND.CPP
// Last Updated on November 23rd 2010
// I, Ian Nielsen, did not get any help from anyone when working on this program.

// Driver program for the function AvgStand.
#include<iostream>
#include<cmath>

void AvgStand(double&, double&, double&, double&, double&, double&);
// Precondition: The first four variables have been given non negative numbers.
// Postcondition: The last two variables will be set to the average
// and standard deviation of the first four numbers.

int main()
{
    using namespace std;
    
    double score_1, score_2, score_3, score_4, avg, deviation;
    char cont;
    
    do
    {
         AvgStand(score_1, score_2, score_3, score_4, avg, deviation);
         
         cout << "The average of the four scores is " << avg << ".\n";
         cout << "The standard deviation of the four scores is " << deviation << ".\n";
         
         cout << "Test again? (y or n): ";
         cin >> cont;
         cout << endl;
    }while((cont == 'y') || (cont == 'Y')); //The program will repeat until the user does not want it to.
    
    system("pause");
    return 0;
}

void AvgStand(double& score_1, double& score_2, double& score_3, double& score_4, double& avg, double& deviation)
{
     using namespace std;
     
     double value_avg_1, value_avg_2, value_avg_3, value_avg_4, summation;
     
     cout << "This is a driver program for the function AvgStand.\n";
     cout << "Enter four test scores, and press enter after each score: ";
     cin >> score_1;
     while(score_1 < 0) //Until the score is not negative the program will prompt an error.
     {
                   cout << "The value is invalid, try again: ";
                   cin >> score_1;
     }
     cin >> score_2;
     while(score_2 < 0) //Until the score is not negative the program will prompt an error.
     {
                   cout << "The value is invalid, try again: ";
                   cin >> score_2;
     }
     cin >> score_3;
     while(score_3 < 0) //Until the score is not negative the program will prompt an error.
     {
                   cout << "The value is invalid, try again: ";
                   cin >> score_3;
     }
     cin >> score_4;
     while(score_4 < 0) //Until the score is not negative the program will prompt an error.
     {
                   cout << "The value is invalid, try again: ";
                   cin >> score_4;
     }
     avg = (score_1 + score_2 + score_3 + score_4) / 4;
     value_avg_1 = score_1 - avg;
     value_avg_2 = score_2 - avg;
     value_avg_3 = score_3 - avg;
     value_avg_4 = score_4 - avg;
     summation = ((pow(value_avg_1,2)) + (pow(value_avg_2,2)) + (pow(value_avg_3,2)) + (pow(value_avg_4,2)));
     deviation = sqrt(summation / 3);
}  
    
