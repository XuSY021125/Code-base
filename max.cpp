#include <stdio.h>
int main() 
{
	int a[6] = { 10,7,15,20,3,1 };
	int i, max, num;
	max = a[0];
	num = 0;
	for (i = 1; i < 6; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num = i;
		}
	}
	printf("���ֵ��%d\n", max);
	printf("�±� %d\n", num);
	return 0;
}