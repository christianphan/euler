#include <iostream>
#include <cstdlib>


using namespace std;


int main()
{

	int sum = 0;
	int sumsquared = 0;
	int squaredsum = 0;
	int answer= 0;
	for(int i = 1; i <= 100; i++)
	{
		sum += i;
		sumsquared += (i * i);

	}

	cout << sum << endl;
	squaredsum = sum * sum;
	answer = squaredsum - sumsquared;

	cout << answer << endl;

}
