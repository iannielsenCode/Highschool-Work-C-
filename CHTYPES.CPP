//Student: Ian Nielsen
//File Name: CHTYPES.CPP
//Last Updated: December 8th 2010
//I, Ian Nielsen, did not get help from anyone when working on this program.

#include<iostream>
using namespace std;

int main()
{
    char symbol;
    int letters(0), digits(0), other(0);
    
    cout << "Enter a line of characters and I will tell you how many letters,"
         << " numbers, and \nother characters, including spaces, that you typed in.\n"
         << "Press enter to finish:";
    
    cin.get(symbol);
        
    while(symbol != '\n') //While the character entered is not a new line, then the loop will continue
    {
                   
        if(isalpha(symbol)) //If the character is a letter the variable letters will get a 1 added to its value.
        {
            letters++;
        }
        
        if(isdigit(symbol)) //If the character is a number the variable digits will get a 1 added to its value.
        {
            digits++;
        }
        
        if(isspace(symbol)) //If the character is a space the variable other will get a 1 added to its value.
        {
            other++;
        }
        
        if((!isalpha(symbol)) && (!isdigit(symbol)) && (!isspace(symbol))) //If the character is not a letter, number or space, the variable other will get a 1 added to its value.
        {
            other++;
        }
        
        cin.get(symbol);
    }
    
    
        
    cout << "You entered:\n" << letters << " letters\n" 
         << digits << " numbers\n" << other << " other characters\n";
         
    system("pause");
    return 0;

}
 
