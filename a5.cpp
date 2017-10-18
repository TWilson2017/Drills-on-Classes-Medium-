// --------------------------------------------------------------------
// Complete the program to declare two rectangles, the first one 25 by 15,
// the second 20 x 30, then print the area of the first rectangle followed
// by the area of the second.
//
// WARNING:   DO NOT PROMPT FOR INPUT or LABEL OUTPUT.
// --------------------------------------------------------------------
#include <iostream>
static int c=0;
using namespace std;
class RECT
{
 private:
   int x; int y;
 public:
   RECT(int a, int b){x=a;y=b;c=2;}
   int A(){c+=x*y; return x * y;}
};

int main()
{
   RECT Val1(25,15);
   RECT Val2(20,30);
	
   cout << Val1.A() << " " << Val2.A() << endl;

	
   cout << " " << c%7 << endl; return 0; // DO NOT DELETE.
}
