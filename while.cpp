#include <stdio.h>
int main()
{
	int i, sum;
	i = 1; sum = 0;			/*��i��sum�ֱ𸳳�ֵ���������ǵ�ֵ�ǲ���Ԥ��ģ��������ȷ */
	while (i <= 100)		/*��i����100ʱ�˳�ѭ��*/
	{
		sum += i;
		i++;				 /*i+1����ѭ������������ʹѭ�����ڽ���*/
	}
	printf("sum=%d\n", sum);
	return 0;
}