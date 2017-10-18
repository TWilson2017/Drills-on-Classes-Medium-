// ------------------------------------------------------------------------
// Complete the class declaration below, using in-line definitions for
// member functions.
// ------------------------------------------------------------------------
#include <iostream>
using namespace std;

class FRIENDS
{
  public:
   FRIENDS()
   { 
	   
   }
   void Load(int N, string Names[]) // Copy N values from array Names into Friends.
   {
	   numFriends = N;
	   for(int i = 0; i < N; i++)
	   {
		   Friends[i] = Names[i];
	   }
   }// Load
	
   void Show()                      // Display values in Friends array.
	{
		for (int i = 0; i < numFriends; i++)
		{
			cout << Friends[i] << " ";
		}
	}//Show
	
   int FriendCount()
   {
	   return numFriends;
   }// FriendCount
	
 private:
   int numFriends;
   string Friends[20];
	
}; //FRIENDS

                        // DO NOT MOVE OR DELETE.
//#include "mainptclass72400.cpp"
int main()
{
   FRIENDS s1, s2;
   int count;
   string A[5] = {"A","B", "C", "Z", "X"};
   string B[4] = {"FAT", "CAT", "RAN", "FAST"};
   cin >> count;
   s1.Load(count,A); s1.Show(); cout << s1.FriendCount() << ' ';
   s2.Load(count-1,B); s2.Show(); cout << s2.FriendCount() << ' ';
   cout << endl; return 0; // DO NOT MOVE or DELETE.
}//main




