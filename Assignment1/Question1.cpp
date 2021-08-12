#include <iostream>
using namespace std;

int main()
{
    char name[160], gender[5];
    float height;
    int age;
    cout<<"Enter Name of the Student: ";
    gets(name);
    cout<<"Enter Age of the Student: ";
    cin>>age;
    cout<<"Enter Height of the Student: ";
    cin>>height;
    cout<<"Enter Gender of the Student: ";
    cin>>gender;
    cout<<"\n Student Detail ";
    cout<<"\nName of the student is: "<<name<<endl;
    cout<<"Age of the student is: "<<age<<endl;
    cout<<"Height of the student is: "<<height<<endl;
    cout<<"Gender of the student is: "<<gender<<endl;
    
}