#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Time {
    int hrs, mins;
 
public:
    // Constructor
    Time(int, int);
 
    // Casting operator
    operator int();
 
    // Destructor
    ~Time()
    {
        cout << "Data Deleted"
             << endl;
    }
};
 
// Function that assigns value to the
// member variable of the class
Time::Time(int a, int b)
{
    hrs = a;
    mins = b;
}
 
// int() operator is used for Data
// conversion of class to primitive
Time::operator int()
{
    cout << "Conversion of Class"
         << " Type to Primitive Type"
         << endl;
 
    return (hrs * 60 + mins);
}
 
// Function performs type conversion
// from the Time class type object
// to int data type
void TypeConversion(int hour, int mins)
{
    int duration;
 
    // Create Time Class  object
    Time t(hour, mins);
 
    // Conversion OR duration = (int)t
    duration = t;
    cout << "Total Minutes are "
         << duration << endl;
 
    // Conversion from Class type to
    // Primitive type
    cout << "2nd method operator"
         << " overloading " << endl;
 
    duration = t.operator int();
 
    cout << "Total Minutes are "
         << duration << endl;
 
    return;
}
 
// Driver Code
int main()
{
    // Input value
    int hour, mins;
    hour = 2;
    mins = 20;
 
    // Function call to illustrate
    // type conversion
    TypeConversion(hour, mins);
 
    return 0;
}