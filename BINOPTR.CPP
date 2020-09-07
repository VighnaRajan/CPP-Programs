#include<iostream.h>
#include<conio.h>
class dist
{
  int km,m;
  public:
  void getdata();
  dist operator+(dist);
  void disp();
};
void dist::getdata()
{
 cout<<"Enter Kilometer value  :";
 cin>>km;
 cout<<"Enter Meter value      :";
 cin>>m;
}
dist dist::operator+(dist d)
{
 dist t;
 t.km=km+d.km;
 t.m=m+d.m;
 if(t.m>=1000)
 {
  t.km+=1;
  t.m-=1000;
 }
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
 s=d1+d2;
 s.disp();
 getch();
}
