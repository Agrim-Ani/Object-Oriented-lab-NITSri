#include <iostream>
using namespace std;

class Bank_Account {
    
    public:
    char name[500];
    int  acc_no;
    char acc_type[500];
    int balance;

    void info_of_account_holder()
    {
        cout<<endl<<("Enter your full Name : ");
        gets(name);
        cout<<endl<<("Account Number : ");
        cin>>acc_no;
        cout<<endl<<("What is the type of your Account : ");
        cin>>acc_type;
        cout<<endl<<("What is your Account Balance : ");
        cin>>balance;
    }

    void deposit_money()
    {
        int x,y;
        cout<<endl<<("Enter the amount of money you want to deposit : ");
        cin>>x;
        balance=balance+x;
        cout<<endl<<("Your account has been credited by ")<<x<<("amount")<<endl<<endl;
        cout<<("Your current balance is now ")<<balance<<endl;
    }

    void check_amt_and_withdraw(){
        int z;
        cout<<("Your bank balance is ")<<balance<<endl<<("Enter the ammount you want to withdraw : ");
        cin>>z;
        if(z<balance)
        {
        balance-=z;
        cout<<endl<<("Your account has been debited by : ")<<z<<endl<<("Your currernt balance is : ")<<balance;
        }
        else
        {
            cout<<("Your account does not have sufficient funds");
        }
    }
    void Display_name_balance(){
        cout<<("NAME of Account Holder : ")<<name<<endl;
        cout<<("Balance : ")<<balance<<endl;

    }
};

int main()
{

    int a;

    Bank_Account funcn;

    funcn.info_of_account_holder();
    while(a!=0)
    {
    cout<<("1 Display account Holder Info ")<<endl;
    cout<<("2 Deposit Money in your account ")<<endl;
    cout<<("3 Withdraw money from your account ")<<endl;
    cout<<("What operatiion do you want to perform (Type the no. before them) :")<<endl;
    cout<<("POINT: \'Enter 0 to exit the program\' ");
    cout<<endl<<endl;
    cin>>a;
    
    if(a==1)
    {
        funcn.Display_name_balance();
        cout<<endl;
    }
    else if(a==2)
    {
        funcn.deposit_money();
        cout<<endl;
    }
    else if(a==3)
    {
        funcn.check_amt_and_withdraw();
        cout<<endl;
        
    }

}
   if(a==0)
    return 0;
}