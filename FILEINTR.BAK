#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 int regno,m1,m2,m3,x;
 char name[30];
 clrscr();
 ofstream outf;
 ifstream inf;
 //goto x;
 cout<<"data input :";cin>>x;
 if (x==0) goto x;
 outf.open("marks.txt",ios::app);
 cout<<"\nEnter reg_no:";
 cin>>regno;
 outf<<regno<<"\n";
 cout<<"\nEnter name  :";
 cin>>name;
 outf<<name<<"\n";
 cout<<"\nEnter Mark-1:";
 cin>>m1;
 outf<<m1<<"\n";
 cout<<"\nEnter Mark-2:";
 cin>>m2;
 outf<<m2<<"\n";
 cout<<"\nEnter Mark-3:";
 cin>>m3;
 outf<<m3<<"\n";
 outf.close();
 x:
 clrscr();
 inf.open("marks.txt",ios::in);
 again:
 //for(x=0;x<3;x++)

 inf>>regno;
 inf>>name;
 inf>>m1;
 inf>>m2;
 inf>>m3;
 cout<<"\nName  :"<<name;
 cout<<"\nMark-1:"<<m1;
 cout<<"\nMark-2:"<<m2;
 cout<<"\nMark-3:"<<m3;

 if (inf.eof()==0) goto again;
 inf.close();
 getch();
}
