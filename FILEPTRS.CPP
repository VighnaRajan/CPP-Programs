#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 int x;
 ifstream in;
 clrscr();
 in.open("marks.txt",ios::in);
 in.seekg(0,ios::end);
 x=in.tellg();
 cout<<x;
 getch();
}