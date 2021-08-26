#include <iostream>
#include <cmath>
using namespace std;
#define d double
d s,l,b;

void area(d s){
    cout<<"Enter length of side of square: ";
    cin>>s;
    cout<<"Area of square is: "<<pow(s,2)<<" sq. unit";
}
void area(d l,d b){
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    cout<<"Area of square is: "<<(l*b)<<" sq. unit";
}

int main(){
int x;
cout<<"Select the Area you want to calculate of: \n1.) square\n2.) rectangle\n";
cout<<"Enter your choice(Hint: The serial no. of the options): ";
cin>>x;
if(x==1)area(s);
else if(x==2)area(l,b);
else cout<<"option does not match the list";
return 0;
}