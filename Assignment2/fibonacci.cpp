#include <iostream>
using namespace std;
  

class Fibonacci {
  
  
public:
    int a, b, c;
    void series(int n){
    a = 0;
    b = 1;
  
    cout << a << " " << b;
    for (int i = 1; i <= n - 2; i++) {

        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}
};
  


  

int main()
{
    int n ;
    cout<<"Input upto what number index do you want to print the fibonacci series : ";
   cin>>n;
    Fibonacci obj;
    obj.series(n);
    return 0;
}