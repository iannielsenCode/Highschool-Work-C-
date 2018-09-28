//Student: Ian Nielsen
//File Name: ASTRO.CPP
//Last Updated: March 16h 2011
//I, Ian Nielsen, got help from only Mr.Miskin while working on this program.

#include<iostream>
#include<fstream>
using namespace std;

char horoscope(int, int);
//Precondition: The user has given a value for both day and month.
//Postcondition: Letter has been given a value from A to M.

int main()
{
    int day, month;
    char letter, choice;
    ifstream in;
    
    cout << "This program will show your sign and horoscope according to your birthday.\n";
    
    do
    {
        cout << "What month is your birthday in?(enter 1-12):";
        cin >> month;
        while((month < 1) && (month > 12)) //If the month is not between 1 and 12, there will be an error.
        {
            cout << "Month not in range, try again:";
            cin >> month;
        }
        cout << "What day of the month is your birthday on?(enter 1-31):";
        cin >> day;
        while((day < 1) || (day > 31)) //If the day is not between 1 and 31, there will be an error.
        {
            cout << "Day not in range, try again:";
            cin >> day;
        }
        if(((month == 9) || (month == 4) || (month == 6) || (month == 11)) && ((day <= 0) || (day > 30))) //If day is not between 1 and 30, there will be an error.
        {
            while((day <=0) || (day > 30)) //While day is not between 1 and 30, the user will continue to enter day.
            {
                cout << "The day is out of the range of the month, try again:";
                cin >> day;
            }
        }
        if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || ((month == 12)) && ((day <=0) || (day > 31))) //If the day is not between 1 and 31, there will be an error.
        {
            while((day <=0) || (day > 31)) //While day is not between 1 and 31, the user will continue to enter day.
            {
                cout << "The day is out of the range of the month, try again:";
                cin >> day;
            }
        }
        if((month == 2) && ((day <=0) || (day > 29))) //If the day is not between 1 and 29, there will be an error.
        {
            while((day <=0) || (day > 29)) //While day is not between 1 and 29, the user will continue to enter day.
            {
                cout << "The day is out of range of the month, try again:";
                cin >> day;
            }
        }
        letter = horoscope(day, month);
        
        switch (letter)
        {
            char a, b, c;
            case 'A':
                    in.open("CAPRICORN.txt");
                    cout << "Your sign is Capricorn.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 17) && (month == 1)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("AQUARIUS.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file
                         {
                             in.get(b);
                             cout << a;
                         }
                         in.close();
                    }
                    if((day <= 24) && (month == 12)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("SAGITTARIUS.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(!in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'B':
                    in.open("AQUARIUS.txt");
                    cout << "Your sign is Aquarius.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 16) && (month == 2)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("PIECES.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                         in.close();
                    }
                    if((day <= 22) && (month == 1)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("CAPRICORN.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end pf the file.
                        {
                          in.get(c);
                          cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
                     
        case 'C':
                    in.open("PIECES.txt");
                    cout << "Your sign is PIECES.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 18) && (month == 3)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("ARIES.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 21) && (month == 2)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("AQUARIUS.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }                   
                    in.close();
                    cout << endl;
                    break;
        case 'D':
                    in.open("ARIES.txt");
                    cout << "Your sign is Aries.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 17) && (month == 4)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("TAURUS.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                         in.close();
                     }
                     if((day <= 23) && (month == 3)) //If there is a cusp the program will display the other horoscope.
                     {
                         in.open("PIECES.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(c);
                             cout << c;
                         }
                     }
                     in.close();
                     cout << endl;
                     break;
        case 'E':
                    in.open("TAURUS.txt");
                    cout << "Your sign is Taurus.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 18) && (month == 5)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("GEMINI.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 22) && (month == 4)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("ARIES.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'F':
                    in.open("GEMINI.txt");
                    cout << "Your sign is Gemini.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 19) && (month == 6)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("CANCER.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 23) && (month == 5)) //If there is a cusp the program will display the other horoscope.
                    {
                          in.open("TAURUS.txt");
                          cout << "Your birthday is on a cusp.\n";
                          cout << "Horoscope: ";
                          while(! in.eof()) //The program will read and display the file content until the end of the file.
                          {
                              in.get(c);
                              cout << c;
                          }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'G':
                    in.open("CANCER.txt");
                    cout << "Your sign is Cancer.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 20) && (month == 7)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("LEO.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 24) && (month == 1)) //If there is a cusp the program will display the other horoscope.
                    {
                          in.open("GEMINI.txt");
                          cout << "Your birthday is on a cusp.\n";
                          cout << "Horoscope: ";
                          while(! in.eof()) //The program will read and display the file content until the end of the file.
                          {
                              in.get(c);
                              cout << c;
                          }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'H':
                    in.open("LEO.txt");
                    cout << "Your sign is Leo.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 20) && (month == 8)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("VIRGO.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 25) && (month == 7)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("CANCER.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'I':
                    in.open("VIRGO.txt");
                    cout << "Your sign is Virgo.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 20) && (month == 9)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("LIBRA.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 25) && (month == 8)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("LEO.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'J':
                    in.open("LIBRA.txt");
                    cout << "Your sign is Libra.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 20) && (month == 10)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("SCORPIO.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 25) && (month == 9)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("VIRGO.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'K':
                    in.open("SCORPIO.txt");
                    cout << "Your sign is Scorpio.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 19) && (month == 11)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("SAGITTARIUS.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 25) && (month == 10)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("LIBRA.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        {
                    }
                    in.close();
                    cout << endl;
                    break;
        case 'L':
                    in.open("SAGITTARIUS.txt");
                    cout << "Your sign is Sagittarius.\n";
                    cout << "Horoscope: ";
                    while(! in.eof()) //The program will read and display the file content until the end of the file.
                    {
                         in.get(a);
                         cout << a;
                    }
                    in.close();
                    cout << endl;
                    if((day >= 19) && (month == 12)) //If there is a cusp the program will display the other horoscope.
                    {
                         in.open("CAPRICORN.txt");
                         cout << "Your birthday is on a cusp.\n";
                         cout << "Horoscope: ";
                         while(! in.eof()) //The program will read and display the file content until the end of the file.
                         {
                             in.get(b);
                             cout << a;
                         }
                    }
                    in.close();
                    if((day <= 24) && (month == 11)) //If there is a cusp the program will display the other horoscope.
                    {
                        in.open("SCORPIO.txt");
                        cout << "Your birthday is on a cusp.\n";
                        cout << "Horoscope: ";
                        while(! in.eof()) //The program will read and display the file content until the end of the file.
                        {
                            in.get(c);
                            cout << c;
                        }
                    }
                    in.close();
                    cout << endl;
                    break;
        default:
                    cout << "There was an error.\n";
                    break;
    }
    cout << "Do you want to do this again?(y or n):";
    cin >> choice;
    }while((choice == 'y') || (choice == 'Y')); //If the user chooses yes the program will continue.
    system("pause");
    return 0;
}

char horoscope(int day, int month) 
{
    if(((month == 1) && (day >= 22)) || ((month == 12) && (day <= 19))) //Conditions for Capricorn.
    {
        return 'A';
    }
    else if(((month == 1) && (day >= 20)) || ((month == 2) && (day <= 18))) //Conditions for Aquarius.
    {
        return 'B';
    }
    else if(((month == 2) && (day >= 19)) || ((month == 3) && (day <= 20))) //Conditions for Pieces.
    {
        return 'C';
    }
    else if(((month == 3) && (day >= 21)) || ((month == 4) && (day <= 19))) //Conditions for Aries.
    {
        return 'D';
    }
    else if(((month == 4) && (day >= 20)) || ((month == 5) && (day <= 20))) //Conditions for Taurus.
    {
        return 'E';
    }
    else if(((month == 5) && (day >= 21)) || ((month == 6) && (day <= 21))) //Conditions for Gemini.
    {
        return 'F';
    }
    else if(((month == 6) && (day >= 22)) || ((month == 7) && (day <= 22))) //Conditions for Cancer.
    {
        return 'G';
    }
    else if(((month == 7) && (day >= 23)) || ((month == 8) && (day <= 22))) //Conditions for Leo.
    {
        return 'H';
    }
    else if(((month == 8) && (day >= 23)) || ((month == 9) && (day <= 22))) //Conditions for Virgo.
    {
        return 'I';
    }
    else if(((month == 9) && (day >= 23)) || ((month == 10) && (day <=22))) //Conditions for Libra.
    {    
        return 'J';
    }
    else if(((month == 10) && (day >= 23)) || ((month == 11) && (day <= 21))) //Conditions for Scorpio.
    {
        return 'K';
    }
    else if(((month == 11) && (day >= 22)) || ((month == 12) && (day <= 21))) //Conditions for Sagittarius.
    {
        return 'L';
    }
}
        
