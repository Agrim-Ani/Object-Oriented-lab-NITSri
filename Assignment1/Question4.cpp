#include<iostream>
using namespace std;

class Add {

public:
    int addition(int x, int y) {
        return x + y;
    }
};

int main() {

    int x, y, s;

    cout << "Enter two numbers:";
    cin >> x >> y;

    Add obj;
    s = obj.addition(x, y);

    cout << "Sum of two numbers:" << s;

    return 0;
}