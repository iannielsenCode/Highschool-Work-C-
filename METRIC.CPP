// Ian Nielsen
// Chapter 2 Programming Project : METRIC.CPP
// October 7th 2010
// I, Ian Nielsen, did not get any help from anyone when working on this program.

#include <iostream>
using namespace std;

int main()
{
    double weight_cereal, number_of_boxes;
    double weight_tons;
    
    while (weight_cereal > 0) //Repeats the calculation of ounces to metric tons until the user enters 0. 
    {
           cout << "I can calculate how heavy your package of cereal is in metric tons," << endl << "and the number of boxes of that wieght needed to weigh one metric ton in total.\n";
           cout << "Enter the weight of your package of cereal in ounces," << endl << " and to quit enter 0.\n";
           cin >> weight_cereal;
           weight_tons = weight_cereal / 35,273.92; //The weight in metric tons is equal to the weight of cereal in ounces divided by one metric ton.
           number_of_boxes = 35,273.92 / weight_tons; //The number of boxes needed to equal a metric ton in weight is calculated by dividing a metric ton by the weight of one box in metric tons.
           cout << "The weight of your cereal in metric tons is " << weight_tons << " tons.\n";
           cout << "The number of boxes needed to equal one metric ton is " << number_of_boxes << " boxes.\n";
    }
    
    system("pause");
    return 0;
}
    
