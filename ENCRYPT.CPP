#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 ifstream fin,f1in;
 ofstream fout;
 int x,z,y;
 char c,s;
 clrscr();
 fin.open("fileptrs.txt",ios::in);
 fin.seekg(0,ios::end);
 x=fin.tellg();
 fin.seekg(0,ios::beg);

 clrscr();
 fout.open("ncrypt.txt",ios::out);
 for(z=0;z<x;z++)
 {
  c=fin.get();
  cout<<c;
  fout.put(c+1);
 }
 fin.close();
 fout.close();
 cout<<"Press a key to see the encrypted file.";
 getch();
 clrscr();
 fin.open("ncrypt.txt",ios::in);
 for(z=0;z<x;z++)
 {
  c=fin.get();
  cout<<c;
 }
 fin.close();
 getch();
}