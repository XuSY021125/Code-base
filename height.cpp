#pragma warning(disable:4996)
#include<stdio.h>
#define HEG 0.54
float height(float father, float mother)
{
	float son = (father + mother)*HEG;
	return son;
}

int main()
{
	float father;
	float mother;
	float son;
	printf("�����븸�׵���ߣ�\n");
	scanf("%f", &father);
	printf("������ĸ�׵���ߣ�\n");
	scanf("%f", &mother);
	son = height(father,mother);
	printf("Ԥ����ӵ���ߣ�");
	printf("%.2f\n", son);
}