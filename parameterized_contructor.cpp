//Que2:Write a program in c++ to implement parameterized constructor
#include<iostream>
using namespace std;
class rectangle{
private:
double length;
double breadth;
public:
    
rectangle(double l,double b)
{ 
length=l;
breadth=b;
}
double calculateArea(){ 
    return length*breadth;
}
};
int main(){
rectangle rect1(5,5.3);
rectangle rect2(2,2.4);

cout<<"area of rectangle 1: "<<rect1.calculateArea()<<endl; 
cout<<"area of rectangle 2: "<<rect2.calculateArea()<<endl;
 return 0;
}