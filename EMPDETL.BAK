#include<iostream.h>
#include<conio.h>
class emppersonal
{
 int ecode;
 char ename[30],dept[30],desig[30];
 public:
 int bpay;
 void getdatapers()
 {
  cout<<"\nEnter Employee code:";
  cin>>ecode;
  cout<<"\nEnter Employee name:";
  cin>>ename;
  cout<<"\nEnter Department   :";
  cin>>dept;
  cout<<"\nEnter Designation  :";
  cin>>desig;
 }
 void disp()
 {
  cout<<"\nEmployee code:"<<ecode;
  cout<<"\nEmployee name:"<<ename;
  cout<<"\nDepartment   :"<<dept;
  cout<<"\nDesignation  :"<<desig;
  cout<<"\nBasic Pay    :"<<bpay;
 }
}ep;
class empsalary:public emppersonal
{
 int da,hra,ta,allowance,gpay,ins,tax,nsalary;
 public:
  void getdatainc()
  {
  cout<<"\nEnter Basic Pay           :";
  cin>>bpay;
  cout<<"\nExtra income:";
  cout<<"\nEnter Dearness Allowances :";
  cin>>da;
  cout<<"\nEnter House rent allowance:";
  cin>>hra;
  cout<<"\nEnter Travelling allowance:";
  cin>>ta;
  cout<<"\nDeductions:";
  cout<<"\nEnter insurance amount    :";
  cin>>ins;
  cout<<"\nEnter tax amount          :";
  cin>>tax;
  }
  void display()
  {
  cout<<"\nExtra income:";
  cout<<"\nDearness Allowances :"<<da;
  cout<<"\nHouse rent allowance:"<<hra;
  cout<<"\nTravelling allowance:"<<ta;
  cout<<"\nDeductions:";
  cout<<"\nInsurance amount    :"<<ins;
  cout<<"\nTax amount          :"<<tax;
  cout<<"\nSalary:";
  cout<<"\nGross pay           :"<<gpay;
  cout<<"\nNet Salary          :"<<nsalary;
  }
  void calc()
  {
   gpay=bpay+da+hra+ta;
   nsalary=gpay-(ins+tax);
  }
};
void main()
{
 empsalary es;
 clrscr();
 ep.getdatapers();
 es.getdatainc();
 clrscr();
 es.calc();
 ep.disp();
 es.display();
 getch();
}