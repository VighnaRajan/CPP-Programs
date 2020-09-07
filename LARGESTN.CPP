#include<iostream.h>
#include<conio.h>
class large
{
 private:
  int x[30],y,c,i;
  void display();
 public:
  void input();
  void largest();
 large()
 {
  c=0;
 }
};
void large::input()
{
 cout<<"Enter the no of numbers you want to find:";
 cin>>c;
 cout<<"Enter the numbers:";
 for(i=0;i<c;i++)
 {
  cin>>x[i];
 }
}
void large::largest()
{
 y=x[0];
 for(i=1;i<c;i++)
 {
  if(y<x[i])
  {
   y=x[i];
  }
 }
display();
}
void large::display()
{
 clrscr();
 cout<<"The nos are:";
 for(i=0;i<c;i++)
 {
  cout<<x[i];
 }
 cout<<"\nThe greatest number is:"<<y;
}
void main()
{
 clrscr();
 large l;
 l.input();
 l.largest();
 getch();
}