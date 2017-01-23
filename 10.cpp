#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int nums[2000000];

	memset(nums,0,sizeof(nums));
	long long int i,j,sum=0;
	for(i = 2; i<2000000; i++)
	{
		if(nums[i] == 0)
		{
			sum += i;
			for(j = 2*i; j<2000000; j+=i)
				nums[j] = 1;
		}
	}
	cout<<sum<<"\n";

	return 0;
}