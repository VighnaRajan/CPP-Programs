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
  cout<<"\nEnter roll no     :";
  cin>>rno;
  cout<<"\nEnter student name:";
  cin>>name;
  cout<<"\nEnter mark-1      :";
  cin>>m1;
  cout<<"\nEnter mark-2      :";
  cin>>m2;
  cout<<"\nEnter mark-3      :";
  cin>>m3;
 }
 void disp()
 {
  cout<<"\nRoll no     :"<<rno;
  cout<<"\nStudent name:"<<name;
  cout<<"\nMark-1      :"<<m1;
  cout<<"\nMark-2      :"<<m2;
  cout<<"\nMark-3      :"<<m3;
  cout<<"\n";
 }
};
void main()
{
 stud s;
 int c,p;
 fstream f;
 clrscr();
 f.open("bindemo.txt", ios::ate | ios::in | ios::out | ios::binary);
 f.seekg(0,ios::beg);
 cout<<"\nStudent's Details:";
 cout<<"\n~~~~~~~~~ ~~~~~~~";
 while(f.read((char *) &s , sizeof(s)))
 {
  s.disp();
  getch();
 }
 cout<<"Enter 0 to add details or any num to skip:";
 cin>>c;
 f.clear();
 if(c==0)
 {
 cout<<"\nAdd student's Details:";
 cout<<"\n~~~ ~~~~~~~~~ ~~~~~~~";
 s.getdata();
 f.write((char *) &s , sizeof(s));
 }
 clrscr();
 f.seekg(0,ios::beg);
 cout<<"\nStudent's Details:";
 cout<<"\n~~~~~~~~~ ~~~~~~~";
 while(f.read((char *) &s , sizeof(s)))
 {
  s.disp();
  getch();
 }
 f.clear();
 cout<<"Enter 0 to correct record or any num to skip:";
 cin>>c;
 if(c==0)
 {
  cout<<"\nCorrect student's Record:";
  cout<<"\n~~~~~~~ ~~~~~~~~~ ~~~~~~";
  cout<<"\nEnter the position:";
  cin>>p;
  p=(p-1)*sizeof(s);
  s.getdata();
  f.seekp(p,ios::beg);
  f.write((char *) &s, sizeof(s));
 }
 f.clear();
 getch();
 f.close();
}