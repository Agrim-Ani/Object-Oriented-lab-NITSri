#include <iostream> 
using namespace std;
class Rectangle {
private:
    float l;
    float b;
    float a;
public:
    Rectangle() {
        l = 0;
        b = 0;
        a = 0;
    }
    Rectangle(float lnth) {
        l = lnth;
        b = lnth;
        a = l*b;
    }
    Rectangle(float lnth, float bdth) {
        l = lnth;
        b = bdth;
        a = l*b;
    }
    Rectangle(const Rectangle &rect) {
        l = rect.l;
        b = rect.b;
        a = rect.a;
    }
    ~Rectangle() {
        cout<<"data cleared"<<endl;
    }
    void dispArea() {
        cout<<"Area: "<<a<<endl;
} };
int main() {

    Rectangle a1, a2(1), a3(8.4, 6.3);
    a1.dispArea();
    a2.dispArea();
    a3.dispArea();
    return 0; 
}