#include<iostream>
#include<cmath>
using namespace std;

void calculations(double, double, double, double&, double&);

int main()
{
    double a, b, c, perimeter, area;
    cout << "Please enter the three side lengths of the triangle: ";
    cin >> a >> b >> c;
    calculations(a, b, c, perimeter, area);
    cout << "The perimeter of the triangle is " << perimeter << endl
         << "and the area of the triangle is " << area << ".\n";
         
    cout << endl << endl << endl;
    system("pause");
    
    return (0);

}

void calculations(double a, double b, double c, double& perimeter, double& area)
{
     double s;
     
     s = (a + b + c) / 2;
     perimeter = s * 2;
     area = sqrt(s * (s - a) * (s - b) * (s - c));
}
