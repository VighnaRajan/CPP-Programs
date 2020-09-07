#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int x,y,a,b,i,j,g,h;
 public:
  void input();
  void add();
  void sub();
  void adddisp();
  void subdisp();
};
void complex::input()
{
 cout<<"Enter the real part of 1st complex no.=";
 cin>>x;
 cout<<"Enter the imaginary part of 1st complex no.=";
 cin>>y;
 cout<<"\nEnter the real part of 2nd complex no.=";
 cin>>a;
 cout<<"Enter the imaginary part of 2nd complex no.=";
 cin>>b;
}
void complex::add()
{
 i=x+a;
 j=y+b;
}
void complex::sub()
{
 g=x-a;
 h=y-b;
}
void complex::adddisp()
{
 cout<<"\nThe addition of two complex nos is = "<<i<<" +"<<j<<"i";
}
void complex::subdisp()
{
 if(h>=0)

  cout<<"\nThe subtraction of two complex nos is = "<<g<<" +"<<h<<"i";

 else
  if(h<0)

   cout<<"\nThe subtraction of two complex nos is = "<<g<<" "<<h<<"i";

}
void main()
{
 clrscr();
 int d=0;
 complex c;
 c.input();
 cout<<"Press '1' to add the numbers or press '2' to sub the numbers=";
 cin>>d;
 if(d==1)
 {
  c.add();
  c.adddisp();
 }
 else if(d==2)
 {
  c.sub();
  c.subdisp();
 }
 else
 {
 cout<<"!!Invalid Entry!!";
 }
 getch();
}