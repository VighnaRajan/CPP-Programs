#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 ifstream fin;
 ofstream fout,f1out;
 int x,z,y;
 char c,s;
 clrscr();
 fin.open("fileptrs.txt",ios::in);
 fin.seekg(0,ios::end);
 x=fin.tellg();
 fin.seekg(0,ios::beg);

 clrscr();
 fout.open("oddncrpt.txt",ios::out);
 f1out.open("evnncrpt.txt",ios::out);
 for(z=0;z<x;z++)
 {
  c=fin.get();
  if(c%2==0) f1out.put(c);
  else fout.put(c);
 }
 cout<<"FILE SUCCESSFULLY ENCRYPTED";
 fin.close();
 fout.close();
 f1out.close();
 getch();
}