#include<iostream>
#include<conio.h>
using namespace std;
class number
{
  public:
  int a,b;
}
void getdata()
{
  cout<<"\nAddition\n: ";
  cout<<"\nEnter Number 1 : ";
  cin>>a;
  cout<<"\nEnter Number 2 : ";
  cin>>b;
}
void display()
{
  cout<<"Addition Of Tow Numbers Is : "<<a+b;
}
};
int main()
{ 
      number n1;
      n1.getdata();
      n1.display();
      return 0;
}
