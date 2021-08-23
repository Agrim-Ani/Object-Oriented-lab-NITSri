#include <iostream>
using namespace std;
class problem_3{
    public:
    void product(int a){
        cout<<"Prodcut is: "<<a<<endl;
    }
    void product(int a,int b){
        cout<<"Prodcut is: "<<a*b<<endl;
    }
    void product(int a,int b,int c){
        cout<<"Prodcut is: "<<a*b*c<<endl;
    }
    void product(int a,int b,int c,int d);               //defined outside
    void product(int a,int b,int c,int d,int e,int f); //defined outside
    };
    void problem_3::product(int a,int b,int c,int d){
        cout<<"Prodcut is: "<<a*b*c*d<<endl;
    }
    void problem_3::product(int a,int b,int c,int d,int e,int f=1){
        cout<<"Prodcut is: "<<a*b*c*d*e*f<<endl;
    }

int main(){
    int x;
    problem_3 object_3;
    object_3.product(1);          //function 1
    object_3.product(1,2);        //function 2
    object_3.product(1,2,3);      //function 3
    object_3.product(1,2,3,4);    //function 4
    object_3.product(1,2,3,4,5);  //function 5
    object_3.product(1,2,3,4,5,6);//function 5
    return 0;
}
