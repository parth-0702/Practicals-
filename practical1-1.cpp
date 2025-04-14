#include<iostream>
using namespace std;
class Bank{

private:
string name;
string ac_no;
int bal;

public:
void getdata(string name1,string ac_no1,int bal1)
{
 name=name1;
  ac_no=ac_no1;
 bal=bal1;
//return 0;
}
void deposit(int bal ,int add)
{
    bal=bal+add;
    cout<<"Your final amount is"<<bal<<endl;
}
void withdraw(int bal, int sub)
{
    bal=bal-sub;
    cout<<"Your final amount is"<<bal<<endl;
}
};

int main()
{
int j,b;
string n,an;
    Bank o;
    cout<<"Enter name";
    cin>>n;
    cout<<"Enter acc no.";
    cin>>an;
    cout<<"Enter balance";
    cin>>b;
    o.getdata(n,an,b);
    cout<<"enter 1 for deposit or 2 for withdraw";
    cin>>j;

    if(j==1)
    {
        int add;
        cout<<"Enter amount you want to add";
        cin>>add;
        o.deposit(b,add);

    }
    if(j==2)
    {
        int sub;
        cout<<"Enter amount you want to take out";
        cin>>sub;
        o.withdraw(b,sub);

    }
cout<<"OzaParth_24cs055";
}

