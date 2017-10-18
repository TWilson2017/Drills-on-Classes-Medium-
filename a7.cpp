// --------------------------------------------------------------------
// Run the program and provide inputs to cause the ouput to be:
//
//        168
//
// --------------------------------------------------------------------
#include <iostream>
using namespace std;
class RECT
{
 private:
   int x; int y;
 public:
   RECT(int p)
   {
	   x=p;
	   y=7;
   }
   int A(){return x * y;}
};

int main()
{
   int a;
   cin >> a;
   RECT r(a);
   cout << r.A();
   cout << endl; return 0; // DO NOT DELETE.
}

//Ans: 24