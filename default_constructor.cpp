//Que1:Write a program in c++ to implement default constructor
#include<iostream>
using namespace std; 
class wall
{
private:
float length,height,area;
public:
wall(){ 
    length=3;
    height=10;
    area=length*height;
}
void print()
{ 
    cout<<"Length:"<<length<<endl<<"Height:"<<height<<endl<<"Area:"<<area<<endl;
}
};
int main(){
wall a;
a.print();
return 0;
}