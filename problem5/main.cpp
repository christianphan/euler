#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	int initial = 2;
	int i = 1;
	while(i <= 20)
	{
		if(initial%i == 0)
		{
			i++;
		}
		
		else
		{
		
			i = 1;
			initial += 2;
		}
	}

	cout << initial << endl;

}
