#include<iostream.h>
#include<conio.h>
#include<math.h>
class dist
{
  int km,m;
  public:
  void getdata();
  dist operator-(dist);
  void disp();
};
void dist::getdata()
{
 cout<<"Enter Kilometer value  :";
 cin>>km;
 cout<<"Enter Meter value      :";
 cin>>m;
}
dist dist::operator-(dist d)
{
 dist t;
 int m1,m2,m3;
 m1=km*1000+m;
 m2=d.km*1000+d.m;
 m3=abs(m1-m2);
 t.km=m3/1000;
 t.m=m3%1000;
 return t;
}
void dist::disp()
{
 cout<<"\nThe distance is      :"<<km<<"km "<<m<<"m";
}
void main()
{
 dist d1,d2,s;
 clrscr();
 d1.getdata();
 d2.getdata();
 clrscr();
 d1.disp();
 d2.disp();
 s=d1-d2;
 s.disp();
 getch();
}
