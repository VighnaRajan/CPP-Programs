#include<iostream.h>
#include<conio.h>
class deposit
{
 long int pamount;
 int yrs;
 float rate;
 float rvalue;

 public:
 fixed_deposit();
 fixed_deposit(long int p,int y,float r=0.12);
 fixed_deposit(long int ,int y,int r);
 void disp();
};
void deposit::fixed_deposit(long int p,int y,float r)
{
 int i;
 pamount=p;
 yrs=y;
 rate=r;
 rvalue=pamount;
 for(i=1;i<=y;i++)
  rvalue=rvalue*(1.0+r);
}
void deposit::fixed_deposit(long int p,int y,int r)
{
 pamount=p;
 yrs=y;
 rate=r;
 int i;
 rvalue=pamount;
 for(i=1;i<=y;i++)
  rvalue=rvalue*(1.0+float(r)/100);
}
void deposit::disp()
{
 cout<<"\nPrincipal Amount:"<<pamount<<"\nReturn Value:"<<rvalue;
}
void main()
{
 deposit d1,d2,d3;
 long int p;
 int y;
 float r;
 int R;
 cout<<"IN PERCENT";
 cout<<"\nEnter amount:"<<p;
 cout<<"\nEnter period:"<<y;
 cout<<"\nEnter interest rate:"<<p;
 d1=fixed_deposit(p,y,R);
 cout<<"IN DECIMAL";
 cout<<"\nEnter amount:"<<p;
 cout<<"\nEnter period:"<<y;
 cout<<"\nEnter interest rate:"<<p;
 d2=fixed_deposit(p,y,r);
 cout<<"\nEnter amount:"<<p;
 cout<<"\nEnter period:"<<y;
 d3=fixed_deposit(p,y);
 cout<<"\nDeposit 1:";
 d1.disp();
 cout<<"\nDeposit 2:";
 d2.disp();
 cout<<"\nDeposit 3:";
 d3.disp();
}