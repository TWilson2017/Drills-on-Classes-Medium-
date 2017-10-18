// --------------------------------------------------------------------
// Run the program and provide inputs to cause the ouput to be:
//
//        96
//
// --------------------------------------------------------------------
#include <iostream>
using namespace std;
class RECT
{
 private:
   int x; int y;
 public:
   RECT(){x=0;y=0;}
   void Read_xy(){cin >> x >> y;}
   int A(){return x * y;}
};

int main()
{
   RECT r;
   r.Read_xy();
   cout << r.A();
   cout << endl; return 0; // DO NOT DELETE.
}

//Ans: 3 32