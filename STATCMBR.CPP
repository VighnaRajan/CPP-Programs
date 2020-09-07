#include<iostream.h>
#include<conio.h>
class sample
{
 private:
  static char count;
 public:
  sample()
  {
   count=count++;
  }
  void show()
  {
   cout<<count;
  }
};
char sample::count='a';
void main()
{
 clrscr();
 sample a,b;
 a.show();
 sample c,d;
 a.show();
 getch();
}

