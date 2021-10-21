#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Time {
    int hour;
    int mins;
 
public:
    // Default Constructor
    Time()
    {
        hour = 0;
        mins = 0;
    }
 
    // Parameterized Constructor
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
 
    // Function to print the value
    // of class variables
    void Display()
    {
        cout << "Time = " << hour
             << " hrs and "
             << mins << " mins\n";
    }
};
 
// Driver Code
int main()
{
    // Object of Time class
    Time T1;
    int dur = 95;
 
    // Conversion of int type to
    // class type
    T1 = dur;
    T1.Display();
 
    return 0;
}