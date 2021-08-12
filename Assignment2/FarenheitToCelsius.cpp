#include<iostream>
using namespace std;


class Temp{
public:
    float far,cel;
   public:
      float  input()
      {
      cout<<"Enter Value for farenheit temp : ";
      cin>>far;
      cel = (far-32)/1.8;
      return(cel);
      }
      void display()
      {
       float t;
      t=input();
      cout<<"Temp in Celcius : "<< t;
      }

};

 



int  main()
{
Temp c;

c.display();
return 0;
}