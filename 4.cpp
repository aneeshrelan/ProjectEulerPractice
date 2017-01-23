#include <iostream>
using namespace std;

bool isPalindrome(long long int n)
{
	long long int temp = n;
	long long int rev = 0;
	while(n > 0)
	{
		rev = rev*10 + n%10;
		n /= 10;
	}

	if(rev == temp)
	{
		return true;
	}

	return false;


}

int main()
{
	long long int product,max = 0;;

	for(int i = 101; i<=999; i++)
		for(int j = 101; j <= 999; j++)
		{
			product = i * j;
			if(isPalindrome(product) && product > max)
			{
				max = product;
			}
			
		}

cout<<max<<"\n";
	return 0;
}