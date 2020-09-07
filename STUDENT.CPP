#include<iostream.h>
#include<conio.h>
class student
{
 public:
  char name[30];
  int rno,std;
  void getdata()
  {
   cout<<"Enter roll number  :";
   cin>>rno;
   cout<<"\nEnter name       :";
   cin>>name;
   cout<<"\nEnter Standard   :";
   cin>>std;
  }
};
class marks:virtual public student
{
 public:
  int m1,m2,m3;
  void getmarks()
  {
   cout<<"\nEnter mark 1:";
   cin>>m1;
   cout<<"\nEnter mark 2:";
   cin>>m2;
   cout<<"\nEnter mark 3:";
   cin>>m3;
  }
  void mdisp()
  {
   cout<<"\nMarks of "<<rno<<":";
   cout<<"\nMark 1:"<<m1;
   cout<<"\nMark 2:"<<m2;
   cout<<"\nMark 3:"<<m3;
  }
};
class sports:virtual public student
{
 public:
  int pts;
  void getpoints()
  {
   cout<<"\nEnter points:";
   cin>>pts;
  }
  void pdisp()
  {
   cout<<"\nThe sport points of "<<rno<<"is"<<pts;
  }
};
class result:public marks,public sports
{
 public:
  int t;
  float p;
  void calc()
  {
   t=m1+m2+m3+pts;
   p=t/4.0;
  }
  void disp()
  {
   cout<<"\nThe total of "<<rno<<" is     :"<<t;
   cout<<"\nThe percentage of "<<rno<<" is:"<<p;
  }
};
void main()
{
 result r;
 clrscr();
 r.getdata();
 r.getmarks();
 r.getpoints();
 clrscr();
 r.mdisp();
 r.pdisp();
 r.calc();
 r.disp();
 getch();
}