#include<iostream.h>
#include<conio.h>
class complex
{
 int x,y;
 public:
  void input();
  complex add(complex,complex);
  void output();
};
void complex::input()
{
 cout<<"Enter real part:";
 cin>>x;
 cout<<"Enter imaginary part:";
 cin>>y;
}
complex complex::add(complex a,complex b)
{
 complex r;
 r.x=a.x+b.x;
 r.y=a.y+b.y;
 return r;
}
void complex::output()
{
 cout<<x<<"+"<<y<<"i\n";
}
void main()
{
 complex p,q,z;
 clrscr();
 p.input();
 q.input();
 z=z.add(p,q);
 p.output();
 q.output();
 cout<<"The addition of two complex nos is:";
 z.output();
 getch();
}


