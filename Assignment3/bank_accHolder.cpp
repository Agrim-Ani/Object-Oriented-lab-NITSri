#include  <iostream> 
using namespace std;

class member{
private:
    
    char *name;
    char *city;
    char *address;
    float acc_bal;

    //defining a constructer to access these private members
public:
    member(){
        name = new char[60];
        city = new char[60];
        address = new char[60];
        acc_bal= 0.00;
    }
   void getinfo(){
        cout<<"Enter name: "; 
        cin>>name;

        cout<<"Enter city: "; 
        cin>>city;
      
        cout<<"Enter address: "; 
        cin>>address;
       
        cout<<"Enter balance: ₹"; 
        cin>>acc_bal;

        cout<<endl<<endl;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Account Balance : ₹"<<acc_bal<<endl;

    }

};

int main(){
    member person[10];

    for(int i=0;i<10;++i)
    {
        person[i].getinfo();
    }
    for(int i=0;i<10;++i)
    {
        person[i].display();
    }
    return 0;
}