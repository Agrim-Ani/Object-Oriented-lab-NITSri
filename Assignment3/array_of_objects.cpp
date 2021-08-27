#include <iostream>
#include <cmath>
using namespace std;
int i;
class student{
private:
    char *name;
public:
    student(){
        name = new char[50];

    }
    void get(int i){
        cout<<"Enter name of student "<<i+1<<" ";
        cin>>name;
    }
    void display(int i){
        cout<<"Name of student "<<i+1<<" is "<<name<<endl;
    }
};

int main(){
    student st[3];
    for(int i=0;i<3;++i)
    {
        st[i].get(i);
        st[i].display(i);
        cout<<endl;
    }

    return 0;

}