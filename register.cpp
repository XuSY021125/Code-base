#include<stdio.h>
int main()
{
	char cString[6],cString1[4],cString2[4],cString3[19];
	puts("�������˺ţ�");
	gets_s(cString);
	
	puts("���������룺");
	gets_s(cString1);
	
	puts("���������֣�");
	gets_s(cString2);
	
	puts("���������֤�ţ�");
	gets_s(cString3);

	puts("��������˺��ǣ�");
	puts(cString);
	puts("������������ǣ�");
	puts(cString1);
	puts("������������ǣ�");
	puts(cString2);
	puts("����������֤���ǣ�");
	puts(cString3);
	return 0;
}