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
				
				cout<<a<<" "<<b<<" "<<c<<"\n";
				product = a*b*c;
				cout<<product<<"\n";
			}
		}
	}

	return 0;
}