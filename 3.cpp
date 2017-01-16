#include <iostream>
using namespace std;

int main()
{
	long long int n = 600851475143;
	long long int max = 0;
	long long int d = 2;

	while(n > 1)
	{
		while(n%d == 0)
		{
			if(d > max)
				max = d;

			n /= d;
		}

		d++;
	}
	printf("%lld",max);
	printf("\n");
	return 0;
}