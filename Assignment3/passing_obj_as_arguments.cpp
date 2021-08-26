#include <iostream>
using namespace std;

class example
{
public:
    int a;

    void addition(example o)
    {
        a=a+o.a;
        cout<<a;
    }
    
};

int  main()
{
   example o1,o2;

   o1.a=51;
   o2.a=49;

   o2.addition(o1); //passed o1 as argument

    return 0;
}