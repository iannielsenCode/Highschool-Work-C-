#include<iostream>
#include "RATNUM.h"
using namespace std;

Rational::Rational()
{
    numr = 0;
    denom = 1;
}

Rational::Rational(int whole_number)
{
    numr = whole_number;
    denom = 1;
}

Rational::Rational(int a, int b)
{
    numr = a;
    denom = b;
}

Rational operator + (Rational& fr1, Rational& fr2)
{
    Rational sum;
    int a,b,c,d;
    if(fr1.denom == fr2.denom)
    {
        sum.numr = fr1.numr + fr2.numr;
        sum.denom = fr1.denom;
    }
    if(fr1.denom != fr2.denom)
    {
         if(fr2.denom > fr1.denom)
         {
             b = fr2.denom / fr1.denom;
             d = fr1.denom * b;
             d = fr1.denom;
             fr1.numr = b * fr1.numr;
             sum.numr = fr1.denom * fr2.numr;
             sum.denom = fr1.numr * fr2.denom;
         }
         if(fr1.denom > fr2.denom)
         {
             b = fr1.denom / fr2.denom;
             d = fr2.denom * b;
             d = fr2.denom;
             fr1.numr = b * fr2.numr;
             sum.numr = fr1.denom * fr2.numr;
             sum.denom = fr1.numr * fr2.denom;
         }
    }
    return sum;
}

Rational operator * (Rational& fr1, Rational& fr2)
{
    Rational product;
    product.denom = fr1.denom * fr2.denom;
    product.numr = fr1.numr * fr2.numr;
    return product;
}

istream& operator >> (istream& in, Rational& fr2)
{
     cin >> fr2;
     return in;
}

ostream& operator << (ostream& out, Rational a)
{
    out << a.numr << "/" << a.denom;
    return out;
}

bool operator == (Rational& fr1, Rational& fr2)
{
     if((fr1.numr == fr2.numr) && (fr1.denom == fr2.denom))        
     {
         return true;
     } 
     else
     { 
         return false;
     }  
}

bool operator < (Rational& fr1, Rational& fr2)
{
     if((fr1.numr * fr2.denom) < (fr2.numr * fr1.denom))
     {
         return true;
     }
     else
     {
         return false;
     }
}

bool operator > (Rational& fr1, Rational& fr2)
{
     if((fr1.numr * fr2.denom) > (fr2.numr * fr1.denom))
     {
         return true;
     }
     else
     {
         return false;
     }
}

bool operator <= (Rational& fr1, Rational& fr2)
{
     if(((fr1.numr * fr2.denom) < (fr2.numr * fr1.denom)) && ((fr1.numr == fr2.numr) && (fr1.denom == fr2.denom)))
     {
         return true;
     }
     else
     {
         return false;
     }
}

bool operator >= (Rational& fr1, Rational& fr2)
{
     if(((fr1.numr * fr2.denom) > (fr2.numr * fr1.denom)) && ((fr1.numr == fr2.numr) && (fr1.denom == fr2.denom)))
     {
         return true;
     }
     else
     {
         return false;
     }
}

Rational operator / (Rational& fr1, Rational& fr2)
{
    int a,b;
    Rational quot;
    a = fr2.denom;
    fr2.numr = a;
    b = fr2.numr;
    fr2.denom = b;
    quot.numr = fr1.numr * fr2.numr;
    quot.denom = fr1.denom * fr2.denom;
    return quot;
}

Rational operator - (Rational& fr1, Rational& fr2)
{
    int a,b,c,d,e;
    Rational diff;
    if(fr1.denom == fr2.denom)
    {
        diff.denom = fr1.denom;
        diff.numr = fr1.numr + fr2.numr;
        return diff;
    }
    else
    {
        b = fr1.numr;
        c = fr2.numr;
        d = fr2.denom * b;
        e = fr1.denom * c;
        a = fr1.denom * fr2.denom;
        diff.numr = d + e;
        diff.denom = a;
        return diff;
    }
}
        
Rational::Rational reduce(Rational& fr2)
{
    int counter = 2;
    bool reduced = true;

    do
    {
        if((fr2.numr >= 2) && (fr2.denom >= 2))
        {
            for(int counter;counter <= fr2.numr;counter++)
            {
                if((fr2.numr % counter == 0) && (fr2.denom % counter ==0))
                {
                    fr2.numr = (fr2.numr / counter);
                    fr2.denom = (fr2.denom / counter);
                    bool reduced = false;
                }
            }
        }
    }
    while(!reduced);
    
    return fr2;
}

        
