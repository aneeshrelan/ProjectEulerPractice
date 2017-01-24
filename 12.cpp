#include <iostream>
#include <math.h>
using namespace std;

int countDivisors(int n)
{
	int count = 0;
	int sq = sqrt(n);
	for(int i = 1; i<=sq; i++)
	{
		if(n % i == 0)
		{
			count += 2;
		}


	}

	return count;
}

int main()
{

	int i = 2;
	long long int prod;
	while(1)
	{
		prod = i*(i+1)/2;
		if(countDivisors(prod) >= 500)
		{
			cout<<i<<"th term: "<<prod<<" has over 500 divisors";
			break;
		}

		i++;
	}

	
	return 0;
}