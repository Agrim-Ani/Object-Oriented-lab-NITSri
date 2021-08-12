#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<setbase(16);//display in hexadecimal
    cout<<677<<endl;
    cout<<setw(10);//set width upto 10 spaces
    cout<<100<<endl;
    cout<<setfill('#')<<setw(10);
    cout<<"HEY!";
}