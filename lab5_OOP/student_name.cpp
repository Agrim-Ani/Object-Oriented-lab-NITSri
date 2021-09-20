#include <iostream>
using namespace std;

class student_name
{
    string name;
public:
    
    student_name(string nm = "Unknown"){
        name = nm;
    }

    void dispName(){
        cout<<"Name: "<<name<<endl;
    }
    ~student_name()
    {
        
    }
    
};

int main(){
    student_name s1,s2("Agrim Sangotra");
    s1.dispName();
    s2.dispName();
    return 0;
}