#include <iostream> 
using namespace std;
class Float {
private:
    float num;
    friend istream& operator >> (istream& is, Float &obj) {
        is >> obj.num;
return is; }
    friend ostream& operator << (ostream& os, Float const &obj) {
        return os << obj.num;
}
public:
    static void info() {
        cout<<"++ sets the value of object to next integer."<<endl;
        cout<<"-- sets the value of object to previous integer."<<endl;
    }
    Float(float n = 0) {
        num = n;
}
// Prefix
    void operator ++ () {
        num = ((int)num) + 1;
    }
    void operator -- () {
        int n = (int)num;
        if (num != n)
num = n; else
num = n - 1;
}
// Postfix
    void operator ++ (int) {
        num = ((int)num) + 1;
    }
    void operator -- (int) {
        int n = (int)num;
        if (num != n)
        num = n; 
else num = n - 1;
} 
};

int main() {
    Float::info();
    Float a, b, c, d;
    cout<<endl<<"Enter Any Number: ";
cin>>a;
    cout<<"Original Number: "<<a<<endl;
    ++a;
    cout<<"After Applying ++ Operator: "<<a<<endl;
    cout<<endl<<"Enter Another Number: ";
    cin>>b;
    cout<<"Original Number: "<<b<<endl;
    --b;
    cout<<"After Applying -- Operator: "<<b<<endl;
    cout<<endl<<"Enter Another Number: ";
    cin>>c;
    cout<<"Original Number: "<<a<<endl;
    c++;
    cout<<"After Applying ++ Operator: "<<c<<endl;
    cout<<endl<<"Enter Another Number: ";
    cin>>d;
    cout<<"Original Number: "<<b<<endl;
    d--;
    cout<<"After Applying -- Operator: "<<d<<endl;
    return 0; 
}