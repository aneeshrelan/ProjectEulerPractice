#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int n = 10001;
	long long int size = n*log(n*log(n));

	int *nums = new int[size];

	memset(nums,0,sizeof(&nums));
	int count =0;
	for(int i = 2; i<size; i++)
	{
		if(nums[i] == 0)
		{
			
			count++;

			if(count == n)
			{
				cout<<i<<"\n";
				break;
			}
			for(int j = 2*i; j<size; j+=i)
				nums[j] = 1;
		}
	}

	return 0;
}