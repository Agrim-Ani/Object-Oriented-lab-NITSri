#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class student {
private:
    string name;
    int roll;
    char sex;
public:
    void getdata() {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll No: ";
        cin>>roll;
        cout<<"Enter Sex: ";
        cin>>sex; 
}
    void putdata() {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Sex: "<<sex<<endl;
} 
};

class physical_fit: private student {
private:
int height;
int weight;
public:
    void getdata() {
        student::getdata();
        cin.ignore();
        cout<<"Enter Height: ";
        cin>>height;
        cout<<"Enter Weight: ";
        cin>>weight;
    }
    void putdata() {
        student::putdata();
        cout<<"Height: "<<height<<endl;
        cout<<"Weight: "<<weight<<endl;
}
};
int main() {
    physical_fit o;
    o.getdata();
    o.putdata();
return 0; }