#include<iostream.h>
#include<conio.h>
class comp
{
  int r,i;
  public:
  void getdata();
  void operator-();
  void disp();
};
void comp::getdata()
{
 cout<<"Enter real number     :";
 cin>>r;
 cout<<"Enter imaginary number:";
 cin>>i;
}
void comp::operator-()
{
 r=-r;
 i=-i;
}
void comp::disp()
{
 cout<<"\nThe complex nmber is  :"<<r;
 if(i>=0) cout<<"+";
 cout<<i<<"i\n";
}
void main()
{
 comp c;
 clrscr();
 c.getdata();
 c.disp();
 -c;
 c.disp();
 getch();
}
