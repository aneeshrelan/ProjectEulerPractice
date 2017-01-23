#include <iostream>
using namespace std;

int main()
{
	long long int a,b,c,sum;
	a = 0;
	b = 1;
	c = 0;
	sum = 0;
	while(c < 4000000)
	{
		c = a+b;
		b = a;
		a = c;

		if(c % 2 == 0)
			sum += c;
	}
	cout<<sum<<"\n";
	
	return 0;
}