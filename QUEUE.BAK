#include<iostream.h>
#include<conio.h>
class queue
{
 private:
  int q[10],size,item,top,btm;
 public:
 queue()
 {
  top=0;
  btm=0;
 }
  void add();
  void remove();
  void show();
  void readsize();
};
void queue::add()
{
 if(btm>=size)
 {
  cout<<"\nQueue line is filled";
 }
 else
 {
  cout<<"\nEnter a number:";
  cin>>item;
  q[btm]=item;
  btm=btm+1;
 }
}
void queue::readsize()
{
 cout<<"\nEnter the size=";
 cin>>size;
}
void queue::remove()
{
 if(btm==top)
 {
  cout<<"\nQueue is already empty.";
 }
 else
 {
  int disp;
  disp=q[top];
  top++;
  cout<<"\nYou have removed out "<<disp;
  if(top==btm)
  {
   top=0;
   btm=0;
  }
 }
}
void queue::show()
{
 int i=top;
 if(top==btm)
 {
  cout<<"\nThe queue is empty.";
 }
 else
 {
 cout<<"\nThe numbers in queue are:\n";
 for(;i<btm;i++)
 {
  cout<<q[i]<<"\n";
 }
 }
}
void main()
{

 int c;
 queue e;
 clrscr();
 e.readsize();
 cout<<"\n1.Add\n2.Remove\n3.Show\n4.Exit";
 cout<<"\nEnter your choice";
 cin>>c;
 while(c!=4)
 {
  switch (c)
  {
   case 1:
    e.add();break;
   case 2:
    e.remove();break;
   case 3:
    e.show();break;
  }

  cout<<"\n1.Add\n2.Remove\n3.Show\n4.Exit";
  cout<<"\nEnter your choice:";
  cin>>c;
}
getch();
}