// Consider the class declaration below.
//
// Complete the main program that (1) creates one CONTAINER object, then
// (2) displays the maximum value stored in the CONTAINER.
//
// NOTE: All values in the container are between 1 and 10.
//
// If the container holds 5 values, 8 4 9 7 2  ==> output is 9
// -------------------------------------------------------------------
#include <iostream>
using namespace std;
class CONTAINER
{
   public:
       CONTAINER(); // Load values into the container.
       int Size(); // Return the #values in container.
       void Remove(int value); // Remove value from container, if there.
	   void Max() const; //Display Max Value in Container
   private:
       int size;
       int A[10];
};

// NOTE: All values in the container are between 1 and 10.
// Load values into the container from keyboard.
CONTAINER :: CONTAINER()
{
          cin >> size;
          for (int k=0;k<size;k++) 
			  cin >> A[k];
}

// Return the #values in container.
int CONTAINER :: Size(){return size;}

// Remove value from container, if there.
void CONTAINER :: Remove(int val)
{
   for (int k=0;k<size;k++)
   {
      if (A[k]==val)
      {
         size--;
         A[k] = A[size];
      }
   }//for
}//Remove

void CONTAINER :: Max() const
{
	int Biggest = A[0];
	for(int i = 0; i < size; i++)
	{
		if(A[i] >= Biggest)
		{
			Biggest = A[i];
		}
	}
	
	cout << Biggest;
}


int main()
{
	CONTAINER C;
	C.Max();

   cout << endl; return 0; // DO NOT MOVE or DELETE.
}//main
                        // DO NOT MOVE OR DELETE.
