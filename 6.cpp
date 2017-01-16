#include <iostream>
using namespace std;

int main()
{
	long int sum1 = 0, sum2 = 0;
	int n = 100;
	for(int i = 1; i<=n; i++)
	{
		sum1 += i*i;
		sum2 += i;
	}
	
	sum2 = sum2*sum2;

	printf("%ld\n", (sum2-sum1));

	printf("\n");
	return 0;
}