#include<iostream.h>
#include<conio.h>
class item
{
 public:
 int num,uprize,stock;
 char name[30];
 void getdata()
 {
  cout<<"\nEnter the item number:";
  cin>>num;
  cout<<"\nEnter the item name  :";
  cin>>name;
  cout<<"\nEnter the unit prize :";
  cin>>uprize;
  cout<<"\nEnter the stock      :";
  cin>>stock;
 }
 void disp()
 {
  cout<<"\n\nItem's number    ="<<num;
  cout<<"\nItem's name      ="<<name;
  cout<<"\nItem's unit prize="<<uprize;
  cout<<"\nItem's stocks    ="<<stock;
  cout<<"\nValue of item    ="<<uprize*stock;
 }
};
void main()
{
 item x[10];
 int i,n,tot;
 l:
 clrscr();
 cout<<"\nEnter the number of items:";
 cin>>n;
 if(n>10) {cout<<"\nEnter number within 10"; goto l;}
 tot=0;
 for(i=0;i<n;i++)
 {
  x[i].getdata();
  tot=tot+x[i].stock*x[i].uprize;
 }
 for(i=0;i<n;i++)
 {
  x[i].disp();
 }
 cout<<"\nThe total amount is:"<<tot;
 getch();
}