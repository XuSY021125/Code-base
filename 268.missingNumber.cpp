#include<stdio.h>

int missingNumber(int a[],int n)
{
	int i;
	int sum=n;
	for(i=0;i<n;i++)
	{
		sum=sum+i-a[i];
	}
	return sum;
}

int main()
{
	int a[10]={0,2,4,3,1,6,8,7,9,5};
	int m=missingNumber(a,10);
	printf("¶ªÊ§µÄÊı×ÖÊÇ%d",m);
	return 0;
}
