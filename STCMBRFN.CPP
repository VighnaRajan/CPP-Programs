#include<iostream.h>
#include<conio.h>
class sample
{
 private:
  int code;
  static int count;
 public:
  sample()
  {
   count=count++;
   code=0;
  }
  static void showstatic()
  {
   cout<<"\nCode function is called "<<count<<" times.";
  }
  void show()
  {

   code=code++;
   cout<<"\ncode="<<code;
  }
};
int sample::count=0;
void main()
{
 clrscr();
 sample a,b;
 a.show();
 b.show();
 sample::showstatic();
 sample c,d;
 a.show();
 b.show();
 sample::showstatic();
 getch();
}

