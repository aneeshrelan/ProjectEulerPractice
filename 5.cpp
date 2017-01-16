#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
		return a;

	return gcd(b, a%b);
}
int lcm(int a, int b)
{
	return ((a*b)/gcd(a,b));
}
int main()
{
	int LCM;
	LCM = lcm(1,2);

	for(int i = 3; i < 20; i++)
		LCM = lcm(LCM,i);

	printf("%d\n", LCM);

	printf("\n");
	return 0;
}