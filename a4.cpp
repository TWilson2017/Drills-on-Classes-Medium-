// --------------------------------------------------------------------
// Complete the body of the BIG member function.
//
// WARNING:   DO NOT PROMPT FOR INPUT or LABEL OUTPUT.
// --------------------------------------------------------------------
#include <iostream>
using namespace std;
static int t=0;
class LIST
{
 public:
   LIST(){x=0;y=0;z=0;};
   int BIG();
   void Read_x(){int v; cin >> v; t++; x = t* v;}
   void Read_y(){int v; cin >> v; t++; y = t* v;}
   void Read_z(){int v; cin >> v; t++; z = t* v;}
 private:
   int x,y,z;
};

// Return the largest of x, y and z.
int LIST :: BIG()
{
  int Big = -100;
	if(Big <= x)
		Big = x;
	if(Big <= y)
		Big = y;
	if(Big <= z)
		Big = z;
	
	return Big;
}

int main()
{
   LIST myList; // DO NOT DELETE.

   myList.Read_x();     // DO NOT DELETE.
   myList.Read_y();     // DO NOT DELETE.
   myList.Read_z();     // DO NOT DELETE.

   cout << t * myList.BIG(); // DO NOT DELETE.
   cout << endl; return 0;   // DO NOT DELETE.
}
