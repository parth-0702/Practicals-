#include<iostream>
using namespace std;
class management {
   private:
   string id[10];
   string name[10];
   int quantity[10];
   int price[10];
   public:
void data()
{
    for(int i=0;i<10;i++)
    {
        cout<<"ENter id of product "<<i+1 ;
        cout<<endl;
        string id1;
        cin>>id1;
        id[i]=id1;
        cout<<"ENter name of product "<<i+1 ;
                cout<<endl;

        string g;
        cin>>g;
        name[i]=g;
        cout<<"ENter quantity product "<<i+1 ;
                cout<<endl;

        int k;
        cin>>k;
        quantity[i]=k;
        cout<<"ENter price of product "<<i+1 ;
                cout<<endl;

        int p;
        cin>>p;
        price[i]=p;
    }
}
};
int main()
{
management l;
l.data();

}
