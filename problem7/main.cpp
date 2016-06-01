#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main()
{
	int primecount = 0;
	int primefind = 10001;
	int currentnumber = 2;
	bool isprime = true;
	int i = 1;
	while (primecount != primefind)
	{
		
		try
		{	
			while(isprime == true && i <= currentnumber )
			{
				if(currentnumber%i == 0)
				{
					if(i != currentnumber && i != 1)
					{
						isprime = false;
						i = 1;
						currentnumber++;
						throw 1;	
					}
					else if(currentnumber == i)
					{
						currentnumber++;
						primecount++;
						i = 1;
						throw 2;
					}
				}
				i++;
			
			}

		}
		catch(int  message)
		{
			isprime = true;
		}
	}
	cout << currentnumber << endl;


}
