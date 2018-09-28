//Student: Ian Nielsen
//File Name: ADRBOOK.CPP
//Last Updated: May 26th 2011
//I, Ian Nielsen, got help from only Mr. Miskin while working on this program.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char first[20], last[20], city[40], state[40];
    char zip[20], a[40];
    char comma[20] = ","; 
    char space[20] = " "; 
    char next_line[20] = "\n";
    
    cout << "Enter your first name:";
    cin >> first;
    cout << "Enter your last name:";
    cin >> last;
    cout << "Enter your street address:";
    cin.getline(a, 40);
    cout << "Enter your city:";
    cin >> city;
    cout << "Enter your state:";
    cin >> state;
    cout << "Enter your zip code:";
    cin >> zip;
    
    strcat(last, comma);
    strcat(last, space);
    strcat(last, first);
    strcat(last, next_line);
    strcat(last, a);
    strcat(last, next_line);
    strcat(last, city);
    strcat(last, comma);
    strcat(last, space);
    strcat(last, state);
    strcat(last, next_line);
    strcat(last, zip);
    
    cout << "Your Info:\n"
         << last << endl;
    
    system("pause");
    return 0;
}
