//" 24cs055_Oza_Parth "
#include<iostream>
using namespace std;
class Student{
private:
int roll,marks[3];
string name;
float avg;

public:
Student()
{
    roll=0;
    name="N/A";
   
}
Student(int rno,string nam,int mar1,int mar2,int mar3)
{
   roll=rno;
   name=nam;
   marks[0]=mar1;
   marks[1]=mar2;
   marks[2]=mar3;

}
int display()
{
   cout<<"Roll No "<<roll<<endl;
   cout<<"Name :- "<<name<<endl;
   cout<<"Marks of CCP is"<<marks[0]<<endl;
   cout<<"Marks of Maths is"<<marks[1]<<endl;
   cout<<"Marks of Digital Electronics is"<<marks[2]<<endl;
return 0;
}
float avgg()
{
    avg=(marks[0]+marks[1]+marks[2])/3;

cout<<"Average of marks is "<<avg<<endl;

    return 0;
}
};






int main()
{
int n;
cout<<"Enter the num of data you want to enter ";
cin>>n;
Student ob;
Student obj;
for(int i=0;i<n;i++)
{
  int rol,mark1,mark2,mark3;
  string namm;
  cout<<"Enter Roll No ";
  cin>>rol;
  cout<<endl;
   cout<<"Enter Name :- ";
   cin>>namm;
   cout<<endl;
   cout<<"Enter Marks of CCP ";
   cin>>mark1;
   cout<<endl;
   cout<<"Enter Marks of Maths ";
   cin>>mark2;
   cout<<endl;
   cout<<"Enter Marks of Digital Electronics ";
   cin>>mark3;
   cout<<endl;
   Student obj(rol,namm,mark1,mark2,mark3);
   cout<<"THE DATA OF "<<i+1<<"STUDENT IS "<<endl;
   obj.display();
   obj.avgg();

  
}


cout << "\n\n24cs055_Oza_Parth";

}
