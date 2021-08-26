#include <iostream>
#include <cmath>
using namespace std;

class chocolate{
static int chocolate_count;
int n;
public:
void inc_chocolates_by1(){
    n=++chocolate_count;
}
void print_n(){
    cout<<"Iniatial increase in chocolates: "<<n<<endl;
}
static void print_chocolate_count(){
    cout<<"Final NO. OF CHOCOLATES: "<<chocolate_count<<endl;
}
};
int chocolate::chocolate_count;
int main(){
    chocolate o1,o2,o3;
    o1.inc_chocolates_by1();
    o2.inc_chocolates_by1();
    o3.inc_chocolates_by1();
    o1.print_n();
    o2.print_n();
    o3.print_n();
    chocolate::print_chocolate_count();
    return 0;

}