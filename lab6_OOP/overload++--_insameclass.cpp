#include <iostream> 
using namespace std;
class Interger {
private:
    int num;
    friend istream& operator >> (istream& is, Interger &obj) {
        is >> obj.num;
return is; }
    friend ostream& operator << (ostream& os, Interger const &obj) {
        return os << obj.num;
}
public:
    Interger(int n = 0) {
    num = n; 
}

    Interger operator ++ () {
        return ++num;
    }
    Interger operator -- () {
        return --num;
    }

    Interger operator ++ (int) {
        return num++;
    }
    Interger operator -- (int) {
        return num--;
    }
    for(x=i){
        
    }

};
int main() {
    Interger a, b, c, d;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Original Number: "<<a<<endl;
    cout<<"Applying ++a: "<<++a<<endl;
cout<<"After Applying ++a: "<<a<<endl;
    cout<<endl<<"Enter b: ";
cin>>b;
    cout<<"Original Number: "<<b<<endl;
    cout<<"Applying --b: "<<--b<<endl;
    cout<<"After Applying --b: "<<b<<endl;
    cout<<endl<<"Enter c: ";
    cin>>c;
    cout<<"Original Number: "<<c<<endl;
    cout<<"Applying c++: "<<c++<<endl;
    cout<<"After Applying c++: "<<c<<endl;
    cout<<endl<<"Enter d: ";
    cin>>d;
    cout<<"Original Number: "<<d<<endl;
    cout<<"Applying d--: "<<d--<<endl;
    cout<<"After Applying d--: "<<d<<endl;
return 0; }