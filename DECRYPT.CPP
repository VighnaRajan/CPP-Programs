#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 ifstream fin;
 ofstream fout;
 int x,z;
 char c;
 clrscr();
 fin.open("fileptrs.txt",ios::in);
 fin.seekg(0,ios::end);
 x=fin.tellg();
 fin.seekg(0,ios::beg);
 clrscr();
 fin.close();
 fin.open("ncrypt.txt",ios::in);
 fout.open("decrypt.txt",ios::out);
 for(z=0;z<x;z++)
 {
  c=fin.get();
  cout<<c;
  fout.put(c-1);
 }
 fin.close();
 fout.close();
 cout<<"\nPress a key to see the decrypted file.";
 getch();
 clrscr();
 fin.open("decrypt.txt",ios::in);
 for(z=0;z<x;z++)
 {
  c=fin.get();
  cout<<c;
 }
 fin.close();
 getch();
}