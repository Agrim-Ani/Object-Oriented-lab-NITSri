#include <iostream>
using namespace std;
double m;
int n=2;
double power(double m,int n)
{   double res=1;
    while(n>0){
    if(n%2==1)res*=m;
    else
    m*=m;
    n/=2;
}
    return res;
}

int main(){
    int x;
    double z;
    cout<<"Choose the serial no. for options:\n1.)Calculate Square of No.\n2.)Calculate no. \'m\' to a power \'n\'"<<endl;
    cout<<"Enter option: ";cin>>x;

    if(x==1){
        cout<<"Enter No: ";
        cin>>m;
        z=power(m,n);
        cout<<z;
    }
     else if(x==2){
        cout<<"m= ";cin>>m;
        cout<<"n= ";cin>>n;
        z=power(m,n);
        cout<<z;

     }
     return 0;
    

}