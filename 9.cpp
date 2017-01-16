#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	int n = 1000;
	long long int product;
	for(a=1; a<n; a++)
	{
		for(b=a; b<n-a; b++)
		{
			c = n-b-a;

			if(a*a + b*b == c*c)
			{
				printf("%d, %d, %d\n", a,b,c);
				product = a*b*c;
				printf("%lld\n", product);
			}
		}
	}

	printf("\nDone\n");

	return 0;
}