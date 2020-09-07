#include<iostream.h>
#include<conio.h>
#include<string.h>
class food
{
 public:
  char fname[30];
 float prize;
 food(char *n,float p)
 {
  strcpy(fname,n);
  prize=p;
 }
 virtual void disp(){}
};
class icecream:public food
{
 float grams;
 public:
 icecream(char *n,float p,float gms):food(n,p)
 {
  grams=gms;
 }
 void disp();
};
class juice:public food
{
 float mliltr;
 public:
 juice(char *n,float p,float ml):food(n,p)
 {
  mliltr=ml;
 }
 void disp();
};
void icecream::disp()
 {
  cout<<"\nFood name:"<<fname;
  cout<<"\nWeight   :"<<grams<<" gms";
  cout<<"\nPrize    :"<<prize<<" Rs.";
 }
void juice::disp()
 {
  cout<<"\nFood name:"<<fname;
  cout<<"\nQuantity   :"<<mliltr<<" ml";
  cout<<"\nPrize    :"<<prize<<" Rs.";
 }
void main()
{
 char *fname;
 float mliltr,grams,prize;
 clrscr();
 cout<<"\nJuice name:";
 cin>>fname;
 cout<<"\nQuantity (in ml)   :";
 cin>>mliltr;
 cout<<"\nPrize    :";
 cin>>prize;

 juice j1(fname,prize,mliltr);
 cout<<"\nIce-Cream Name:";
 cin>>fname;
 cout<<"\nWeight (in gms)   :";
 cin>>grams;
 cout<<"\nPrize    :";
 cin>>prize;

 icecream i1(fname,prize,grams);
 food* list[2];
 list[0]=&i1;
 list[1]=&j1;
 list[0]->disp();
 list[1]->disp();
 getch();
}