
//Problem 1

#include <iostream>
using namespace std;
class problem_1{
    public: 
    int alpha;
    private: 
    public: 
    inline void function_get(){
    cout<<"Enter number (5 digit):"<<endl;cin>>alpha;
    cout<<"The number entered is: "<<alpha<<endl;
    }
    inline void function_reverse(){
    int array[5],a=alpha;
    for(int i=0;i<5;i++){
        array[i]=a%10;
        a=a/10;
    }
    cout<<"Reversed number: "<<endl;
    for(int i=0;i<5;i++)cout<<array[i];
    }
    inline void function_sum(){
    int sum=0,x=alpha;
    int array[5];
    for(int i=0;i<5;i++){
        array[i]=x%10;
        x=x/10;
    }
    for(int i=0;i<5;i++)sum+=array[i];
    cout<<"Sum: "<<sum<<endl;
    }
    inline void function_product(){
    int product=1,x=alpha;
    int array[5];
    for(int i=0;i<5;i++){
        array[i]=x%10;
        x=x/10;
    }
    for(int i=0;i<5;i++)product*=array[i];
    cout<<"Product: "<<product<<endl; 
    }
    inline void function_if_armstrong(){
        int last,sum,power,x=alpha;
    while(x!=0){
        last=x%10;
        power=last*last*last;
        sum+=power;
        x=x/10;
    }
    if(sum==alpha)cout<<"Armstrong number. "<<endl;
    else cout<<"Not an armstrong number. "<<endl;
    }
};
int main(){
    int number;
    problem_1 object_1;
    while(1){
        puts("\nEnter number for desired operation:\n");
        printf("1: Get()\n2: reverse()\n3: sum()\n4: product()\n5: if_armstrong\n0: terminate\n");
        cin>>number;
        if(number==1)object_1.function_get();
        else if(number==2)object_1.function_reverse();
        else if(number==3)object_1.function_sum();
        else if(number==4)object_1.function_product();
        else if(number==5)object_1.function_if_armstrong();
        else if(number==-1)break;
    }
    return 0;
}
