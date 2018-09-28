#include<iostream>
using namespace std;

void read(int[], int&);

double avg(int[], int, double);

void print(double, int);

int main()
{
    int a[20], size(0);
    double total;
    
    read(a, size);
    avg(a, size, total);
    print(total, size);
    
    system("pause");
    return 0;
}

void read(int a[], int& size)
{
     int num(1);
     cout << "Enter a list of grades(end with a -1)\n";
     for(int i = 0;;i++)
     {
         cout << "Grade " << num << ":";
         cin >> a[i];
         size++;
         if(a[i] == -1)
         {
             size--;
             break;
         }
         num++;
     }
}

double avg(int a[], int size, double total)
{
    for(int i = 0; i < size;i++)
    {
        total = a[i] + total;
    }
    return total;
}

void print(double total, int size)
{
     cout << "The average grade is " << (total / size) << ".\n";
}
    

