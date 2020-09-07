#include<iostream.h>
#include<conio.h>
class stack
{
 private:
  int s[10],size,item,top;
 public:
 stack()
 {
  top=0;
 }
  void pop();
  void push();
  void show();
  void readsize();
};
void stack::push()
{
 if(top>=size)
 {
  cout<<"\nStacks filled";
 }
 else
 {
  cout<<"\nEnter a number:";
  cin>>item;
  s[top]=item;
  top=top+1;
 }
}
void stack::readsize()
{
 cout<<"\nEnter the size=";
 cin>>size;
}
void stack::pop()
{
 if(top==0)
 {
  cout<<"\nStack is already empty.";
 }
 else
 {
  int disp;
  top--;
  disp=s[top];
  cout<<"\nYou have popped out "<<disp;
 }
}
void stack::show()
{
 int i=top-1;
 if(top==0)
 {
  cout<<"\nThe stack is empty.";
 }
 else
 {
 cout<<"\nThe numbers in stack are:\n";
 for(;i>=0;i--)
 {
  cout<<s[i]<<"\n";
 }
 }
}
void main()
{

 int c;
 stack k;
 clrscr();
 k.readsize();
 cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";
 cout<<"\nEnter your choice";
 cin>>c;
 while(c!=4)
 {
  switch (c)
  {
   case 1:
    k.push();break;
   case 2:
    k.pop();break;
   case 3:
    k.show();break;
  }

  cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";
  cout<<"\nEnter your choice:";
  cin>>c;
}
getch();
}