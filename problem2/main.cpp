#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int numone = 1;
	int numtwo = 2;
	int total = numtwo;
	int numthree = 0;

	while(  numthree < 4000000)
	{
		numthree = numone + numtwo;
		
		if(numthree%2 == 0)
		{
			total += numthree;
		}

		numone = numtwo;
		numtwo = numthree;

	}

	cout << total;

}
