#include<stdio.h>
void click()
{
	static int sum = 0;
	sum = ++sum ;
	printf("�����Ϊ%d\n", sum);
}
void main()
{
	click();
	click();
	click();
	click();
	click();
}