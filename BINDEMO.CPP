#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class stud
{
 int rno,m1,m2,m3;
 char name[30];

 public:
 void getdata()
 {
  cout<<"\nEnter roll no       :";
  cin>>rno;
  cout<<"\nEnter student's name:";
  cin>>name;
  cout<<"\nEnter mark-1        :";
  cin>>m1;
  cout<<"\nEnter mark-2        :";
  cin>>m2;
  cout<<"\nEnter mark-3        :";
  cin>>m3;
 }
 void disp()
 {
  cout<<"\nRoll no       :"<<rno;
  cout<<"\nStudent's name:"<<name;
  cout<<"\nMark-1        :"<<m1;
  cout<<"\nMark-2        :"<<m2;
  cout<<"\nMark-3        :"<<m3;
  cout<<"\n";
 }
};
void main()
{
 stud s[3];
 fstream f;
 int i;
 clrscr();
 f.open("bindemo.txt",ios::in | ios::out | ios::binary);
 cout<<"\nEnter The Student's Details:";
 cout<<"\n~~~~~ ~~~ ~~~~~~~~~ ~~~~~~~";
 for(i=0;i<3;i++)
 {
  s[i].getdata();
  f.write((char*) &s[i],sizeof(s[i]));
 }
 clrscr();
 f.seekg(0);
 cout<<"\nStudent's Details:";
 cout<<"\n~~~~~~~~~ ~~~~~~~";
 for(i=0;i<3;i++)
 {
  f.read((char *) &s[i], sizeof(s[i]));
  s[i].disp();
 }
 f.close();
 getch();
}