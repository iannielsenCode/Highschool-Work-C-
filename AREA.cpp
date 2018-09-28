#include <iostream>
using namespace std;

int main()
{
    int width, length, area;
    
    cout << "Hello.\n";
    cout << "Please enter the width of your square.\n";
    cin >> width;
    cout << "Please enter the lenth of your square.\n";
    cin >> length;
    
    area = (width * length);
    
    cout << "The area of your square is " << area << ".\n";
    
    system("pause");
    
    return 0;
}
