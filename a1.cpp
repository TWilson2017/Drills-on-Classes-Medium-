// Consider the class diagram below.
//
//      +------------------------------+
//      | class STUFF                  |
//      |                              |
//      |  +---------------------+     |
//      |  | int q;              |     |
//      |  +---------------------+     |
//      |---------------------+        |
//      | void Set_p(int val);|        |
//      |---------------------+        |
//      | void Set_q(int val);|        |
//      |---------------------+        |
//      |----------+   +--------+      |
//      | STUFF(); |   | int p; |      |
//      |----------+   +--------+      |
//      |--------------+  +------------|
//      | STUFF(int n);|  | Show();    |
//      +------------------------------+
//
// Complete the declaration of this class using in-line member function definitions.
// The default constructor intializes member variable p to -99, and q to 99.
// The other constructor initializes q to 7, and p to the n'th odd number (1,3,5...).
// Function Show displays values of member variables q and p, respectively.
// ----------------------------------------------------------------
#include <iostream>
using namespace std;

class STUFF
{	
	public:
	void Set_p(int val)
	{
		p = val;
	}
	
	void Set_q(int val)
	{
		q = val;
	}
	
	STUFF() 
	{
		p = -99;
		q = 99;
	}

	STUFF(int n)
	{
		q = 7;
		
		if (n == 1)
			p = 1;
		
		if (n == 2)
			p = 3;
		
		if(n == 3)
			p = 5;
		
		if(n == 4)
			p = 7;
		
		if(n == 5)
			p = 9;
		
		if(n == 6)
			p = 11;
		
		if(n == 7)
			p = 13;
		
		if(n == 8)
			p = 15;
		
		if(n == 9)
			p = 17;
		
		if(n == 10)
			p = 19;
	}
	
	void Show()
	{
		cout << q << " " << p;
		cout << endl;
	}
	
	private:
	int q;
	int p;
};


                        // DO NOT MOVE OR DELETE.
//#include "mainptclass72000.cpp"
int main()
{
   STUFF s1, s3;
   s1.Show();
   int a; cin >> a;
   STUFF s2(a); s2.Show();
   s3.Set_q(a); s3.Set_p(a*3); s3.Show();
   cout << endl; return 0; // DO NOT MOVE or DELETE.
}//main


