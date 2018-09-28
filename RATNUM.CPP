//Student: Ian Nielsen
//File Name: RATNUM.CPP
//Last Updated: April 1st 2011
//I, Ian Nielsen, got help from only Mr.Miskin while working on this program.

#include<iostream>
#include "RATNUM.h"
using namespace std;

int main() 
{ 
    Rational fr1(2,3);
    Rational fr2, sum, product, quot, diff;
    char choice;
    bool a,b,c,d,e;
    
    do
    {
        cout << "Enter a fraction in the form a/b:";
        cin >> fr2; 

        fr2 = reduce(fr2);
        cout << "Your fraction reduced is " << fr2;
        sum = fr1 + fr2;
        product = fr1 * fr2;
      
        if(fr1 == fr2)
        {
            cout << fr1 << "=" << fr2 << endl;
        }
        b = (fr1 < fr2);
        if(b == true)
        {
            cout << fr1 << " < " << fr2 << endl;
        }
        c = (fr1 > fr2);
        if(c == true)
        {
            cout << fr1 << " > " << fr2 << endl;
        }
        d = (fr1 <= fr2);
        if(d == true)
        {
            cout << fr1 << " <= " << fr2 << endl;
        }
        e = (fr1 >= fr2);
        if(e == true)
        {
            cout << fr1 << " >= " << fr2 << endl;
        }

        cout << fr1<< "+" << fr2 << "=" << sum << endl;
        cout << fr1<< "*" << fr2 << "=" << product << endl; 
        cout << fr1<< "-" << fr2 << "=" << diff << endl;
        cout << fr1<< "/" << fr2 << "=" << quot << endl;
        
        cout << "Do you want to do this again?(y or n):";
        cin >> choice;
    }while((choice == 'y') || (choice == 'Y'));
    system("pause");    
    return 0; 
} 
