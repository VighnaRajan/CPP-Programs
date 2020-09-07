#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 ifstream fin;
 int x,z;
 char c;
 fin.open("fileptrs.cpp",ios::in);
 fin.seekg(0,ios::end);
 x=fin.tellg();
 fin.seekg(0,ios::beg);
 clrscr();
 for(z=0;z<x;z++)
 {
  c=fin.get();
  cout<<c;
 }
 getch();
}