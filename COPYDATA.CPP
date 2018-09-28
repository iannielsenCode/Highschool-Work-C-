//Student: Ian Nielsen
//File Name: COPYDATA.CPP
//Last Updated: December 15th 2010
//I, Ian Nielsen, did not get any help from anyone when working on this program.

void function(istream&, char());
//Precondition: The data will be successfully entered, and or taken from a file.
//The files choosen have also been opened correctly.
//Postcondition: The data has been entered into the file choosen.

#include<iostream>
#include<fstream> 

using namespace std;

int main()
{
    char select(4);
    cout << "I can save input into a file that is either given through the "
         << "keyboard or is from another file.\n"
         << "Do you want to type the data in or get the data from another "
         << "file (type in key or file):";
    cin >> select;
    
    function(cin, select);              
    
    system("pause");
    return 0;
}

void function(istream& cin, char select)
{
    char symbols, file_1(10), file_2(10), file_3(10);
    ifstream input_1;
    ofstream output_1, output_2;
     
     
    if ((select == "key") || (select == "Key"))      //If the user chooses to use the 
    {                                                //keyboard the following will happen.
        cout << "Type in any data of characters:";    
        do
        {
            cin.get(symbols);
        }while(symbols == '~');
        cout << "What file do you want to save the input in? :";
        cin >> file_1;
        output_1.open("file_1");
        cin.put(symbols);
        output_1.close();
        cout << "The data had been saved in the file " << file_1 << ".\n";
    }
    if ((select == "file") || (select == "File"))           //If the user chooses to use
    {                                                       //a file the following will happen.
        cout << "What file do you want to take data from? :";
        cin >> file_2;
        input_1.open("file_2");
        do
        {
            input_1.get(symbols);
        }while(input_1.eof);
        cout << "What file do you want to save the input in? :";
        cin >> file_3;
        input_1.close();
        output_2.open("file_3");
        cin.put(symbols);
        output_2.close();
        cout << "The data has been stored in the file " << file_3 << ".\n";
    }
}
