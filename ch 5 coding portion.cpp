#include<iostream>
#include<fstream>

using namespace std;

void append(istream&, char, char);

int main()
{
    ifstream input;
    ofstream output;
    char file[10], file_2[10], data, data_2, choice[4];
    
    cout << "What file would you like to take the data from? :";
    cin >> file[10];
    input.open("file");
    cout << "The data in the file " << file << "is ";
    do
    {
        input.get(data);
        cout << data;
    }while(input.eof());
    input.close();
    cout << "How would you like to append the data? (type either key or file)";
    cin >> choice;
    if(choice == "key")
    {
        output.open("file");
        cout << "Type in the data you want to add to the file:";
        cin >> data_2;
        append(cin, data, data_2);
        cout << "The data has been added to the file.";
        output.close();
    }
    if(choice == "file")
    {
        cout << "What file would you like to take the data from? :";
        cin >> file_2;
        input.open("file_2");
        input.get(data_2);
        input.close();
        output.open("file");
        append(cin, data, data_2);
        cout << "The data has been added to the file.";
        output.close();
    }
}       
void append(istream& cin, char data, char data_2)
{
    cout.put(data); 
    cout.put(data_2);
}
    
