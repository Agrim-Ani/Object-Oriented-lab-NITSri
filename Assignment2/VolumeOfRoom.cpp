#include <iostream>
using namespace std;

class Room{
public:

void Volume(float l,float b,float h){
   float x;
   x=l*b*h;
   cout<<x;

}    
};
int main()
{
    float x,y,z,k;
    cout<<"Enter\n Length \n Breadth \n height \n of the room respectively below"<<endl;
    cin>>x>>y>>z;
    Room vol;
    
    cout<<"Volume of the room is : ";
    vol.Volume(x,y,z);
    return 0;

}