#include <iostream> 
using namespace std;
class Student {
private:
    string name;
    int age;
    string address;
public:
    Student(string n="unknown", int a=0, string add="not available") {
        name = n;
        age = a;
        address = add;
    }
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        address = s.address;
    }
    ~Student() {
        cout<<"info cleared"<<endl;
    }
    void setInfo(string nm, int ag) 
    {
     name = nm;
     age = ag; 
    }
    void setInfo(string nm, int ag, string ad) {
        name = nm;
        age = ag;
        address = ad;
    }
    void printInfo() {
        cout<<"Name: "<<name<<", Age: "<<age<<", Address: "<<address<<endl;
} 
};
int main() {
    Student o[10];
    for (int i=0; i<10; i+=3) {
        o[i].setInfo("Sample Name "+to_string(i+1), i*10, "Sample Name "+to_string(i*2));
}
    for (int i=0; i<10; i++) {
        o[i].printInfo();
}
return 0;
}