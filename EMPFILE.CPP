#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<io.h>
void main()
{
 int eno,salary,z,s,mm;
 char name[30];
 ofstream out;
 ifstream y;
 clrscr();
 cout<<"data input :";cin>>s;
 if (s==0) goto s;
 out.open("employee.txt",ios::app);
 cout<<"Enter Employee name  :";
 cin>>name;
 cout<<"Enter Employee code  :";
 cin>>eno;
 cout<<"Enter Employee salary:";
 cin>>salary;
 out<<name<<"\n";
 out<<eno<<"\n";
 out<<salary<<"\n";
 out.close();
 s:
 clrscr();

 y.open("employee.txt",ios::in);
 x:
// for(z=0;z<5;z++)
 // {
 y>>name;
 y>>eno;
 y>>salary;

 if(salary>=1000)
 {
 // for(z=0;z<5;z++)
 // {
  cout<<"\nEmployee name  :"<<name;
  cout<<"\nEmployee salary:"<<salary;
 }
 else cout<<"\nThe salary is not above 1000"<<"sal="<<salary;
// }


// else cout<<"\nThe salary is not above 1000";

 if (y.eof()==0) goto x;
 y.close();
 getch();
}