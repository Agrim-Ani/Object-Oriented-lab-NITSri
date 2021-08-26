#include <iostream>
using namespace std;
class obj{
    int x;
    static int count;
public:
    void set_in(){
        x=++count;
    }
    static void no_of_obj(){
        cout<<"No. of objects used are : "<<count;
    }
};
int obj::count;

int main(){
    obj o1,o2,o3;
    o1.set_in();
    o2.set_in();
    o3.set_in();

    obj::no_of_obj();
     return 0;
    

}