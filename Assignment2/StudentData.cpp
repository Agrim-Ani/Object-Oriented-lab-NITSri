#include <iostream>

using namespace std;

class Student_Info{
    int roll_number;
    char student_name[50], grade[2];

    public:
        void read_data(int x){
            cout<<"student "<<x+1<<" information \n";
            cout<<"Name of the Student : ";
            cin>>student_name;
            cout<<"Roll Number: ";
            cin>>roll_number;
            cout<<"Grade : ";
            cin>>grade;
           
            }
        void display_data(int x){
            cout<<"\n\n Student "<<x+1<<" Information ";
            cout<<"\nName of the Student: "<<student_name;
            cout<<"\nRoll Number: "<<roll_number;
            cout<<"\nGrade : "<<grade;
            }
};

int main(){
    Student_Info stud[3];
    int i;
    for(i=0; i<3; i++)
        stud[i].read_data(i);
    
    for(i=0; i<3; i++)
        stud[i].display_data(i);
    return 0;
}
