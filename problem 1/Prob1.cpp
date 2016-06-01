#include <iostream>
#include <cstdlib>


using namespace std;


int main()
{
	int total = 0;
	int current = 0;

	while( current < 1000)
	{
		if((current % 3) == 0)
		{
			total += current;

		}
		else if ((current % 5) == 0)
		{
			total +=current;

		}

		current++;
	}

	cout << total;
}


