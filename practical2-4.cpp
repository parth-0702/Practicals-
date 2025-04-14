/*Develop an InventoryItem class to manage items in a store: 
Data Members: 
o itemID, itemName, price, and quantity. 
Constructors: 
o Default constructor to set default values (price = 0, quantity = 0). 
o Parameterized constructor to initialize all attributes. 
Member functions:  
o addStock(int qty) to increase quantity. 
o sellItem(int qty) to decrease quantity (check for sufficient stock). 
o displayItem() to show item details. 
Tasks: 
o Create an array of items using the parameterized constructor. 
o Simulate adding stock, selling items, and displaying updated inventory. */#include<iostream>
using namespace std;

class Inventory{

int itemID,price,quantity;
string name;
public:
Inventory()
{
    price=0;
    quantity=0;

}
Inventory(int id,int p,int q,string nam)
{
name=nam;
itemID=id;
price=p;
quantity=q;

}
int sellbuy(int h)
{
int k,qu;
    if(h==itemID)
    {
        cout<<"YOU HAVE SELECTED "<<name<<"\n";
        cout<<"Enter 1 to add and 2 to sell: ";
        cin>>k; 
        if(k==1)
        {
            
            cout<<"Enter number of Quantity you Want to Add : ";
            cin>>qu;
            quantity=qu+quantity;
        }
        else if(k==2)
        {
            cout<<"Enter number of Quantity you Want to Sell : ";
            cin>>qu;
            quantity=quantity-qu;
        }
     return 0;
    }
   
    
}
void display()
{
cout<<"******************************************\n";
cout<<"NAME OF ITEM - ";
cout<<name;
cout<<"\n";
cout<<"ID NUMBER OF ITEM - ";
cout<<itemID;
cout<<"\n";
cout<<"QUANTITY OF ITEM - ";
cout<<quantity;
cout<<"\n";
cout<<"PRICE OF ITEM - ";
cout<<price;
cout<<"\n";
cout<<"******************************************\n";

}


};

int main()
{
int ID,pri,quan,num;
string namm;

cout<<"ENter Number of diff product You Want to Store : ";
cin>>num;
//Inventory obj(string namm,int ID,int quan,int pri),obj1[num];
Inventory obj1[num];
for(int i=0;i<num;i++)
{
    cout<<"\n\nDetails of product "<< i+1 <<" is: \n\n";
    
    cout<<"ENter the name of Product : ";
    cin>>namm;
   // cout<<"\n";
    cout<<"ENter the ID of Product : ";
    cin>>ID;
   // cout<<"\n";
    cout<<"ENter the Quantity of Product : ";
    cin>>quan;
   // cout<<"\n";
    cout<<"ENter the price of Product : ";
    cin>>pri;
   // cout<<"\n";
    obj1[i]=Inventory(ID,pri,quan,namm);
}
int h;
cout<<"\nEnter the product id to add items or sell items :\n OR \n enter 0 to display Inventory:  ";
cin>>h;
if(h==0)
{
 for(int l=0;l < num;l++)
 {
 obj1[l].display();
 }
}else{

    for(int i=0;i<num;i++)
    {

   obj1[i].sellbuy(h);
}
   
    
    
cout<<"\n     THANKYOU TO UPDATE THE LIST    \n\n   YOUR FINAL LIST IS AS BELOW : \n\n";

for(int l=0;l < num;l++)
{
    cout<<" "<<l+1<<" \n";
obj1[l].display();
}

}




}
