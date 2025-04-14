#include<iostream>
#include<string.h>
using namespace std;

class bank
{
    char name[20];
    int account_number;
    int balance=0;

public:
    int compare(int ,int );
    void getdata();
    void putdata();
    void deposit_money();
int withdraw_money();
    void display_balance();
};
int bank::compare(int acc,int c )
{
    if(account_number==acc)
    {
        if(c==1)
        {
            deposit_money();
            cout<<"Final Details:\n";

            putdata();

        }else if(c==2)
        {
            withdraw_money();
            cout<<"Final Details:\n";

            putdata();

        }else if(c==3)
        {
            putdata();

        }

        return 0;
    }
}

void bank::getdata()
{
    cout<<"\n Enter your name: ";
    cin>>name;
    cout<<"\n Enter your account number: ";
    cin>>account_number;
    cout<<"\n Enter the balance in your account: ";
    cin>>balance;
}

void bank::putdata()
{
    cout<<"\n Your name is "<<name;
    cout<<"\n Your account number is "<<account_number;
    cout<<"\n  Balance in your account is "<<balance;
}

void bank::deposit_money()
{
    int d;
    cout<<"\n Enter the amount you want to deposit: ";
    cin>>d;
    balance=balance+d;

}

int bank::withdraw_money()
{
    int w;
    cout<<"\n Enter the amount you want to withdraw: ";
    cin>>w;
    

    if(balance<=w)
    {
        cout<<"\n Insufficient balance in your account.";
        return 0;

    }

    balance=balance-w;
}

void bank::display_balance()
{
    cout<<"\n Current balance in your account is "<<balance;
}

int main()
{
    int n,i,c,acc;
    cout<<"\n Enter the number of account you want to create: ";
    cin>>n;

    bank b[n];

    for(i=0;i<n;i++)
    {
        cout<<"Details of client "<<i+1<<" \n";
        b[i].getdata();
        
    }
    cout<<"Enter 1 to deposite \nEnter 2 for withdraw money\nEnter 3 to see details of your account: ";
    cin>>c;
    
    cout<<"Enter the account number in which you want to do changes :- ";
    cin>>acc;
    for(int i=0;i<n;i++)
    {
        b[i].compare(acc,c);
    }


}
