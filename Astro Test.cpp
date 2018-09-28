#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char letter, day, month;
    ifstream in;
    
    
        cout << "What month is your birthday in?(enter 1-12):";
        cin >> month;
        while((month < 1) && (month > 12)) //If the month is not between 1 and 12, there will be an error.
        {
            cout << "Month not in range, try again:";
            cin >> month;
        }
        cout << "What day of the month is your birthday on?(enter 1-31):";
        cin >> day;
        while((day < 1) || (day < 31)) //If the day is not between 1 and 31, there will be an error.
        {
            cout << "Day not in range, try again:";
            cin >> day;
        }
        if(((month == 9) || (month == 4) || (month == 6) || (month == 11)) && ((day <= 0) || (day > 30)))
        {
            while((day <=0) || (day > 30))
            {
                cout << "The day is out of the range of the month, try again:";
                cin >> day;
            }
        }
        if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || ((month == 12)) && ((day <=0) || (day > 31)))
        {
            while((day <=0) || (day > 31))
            {
                cout << "The day is out of the range of the month, try again:";
                cin >> day;
            }
        }
        if((month == 2) && ((day <=0) || (day > 29)))
        {
            while((day <=0) || (day > 29))
            {
                cout << "The day is out of range of the month, try again:";
                cin >> day;
            }
        }
    system("pause");
    return 0;
}
