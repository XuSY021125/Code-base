#include<stdio.h>
void main()
{
    int arr[3] = { 10, 100, 1000 }, i = 0;
    int* ptr = arr;
    for (i = 0; i < 3; i++)
    {
        printf("����%d�ĵ�ַΪ��%p\n", i, ptr);
        printf("����%d������Ϊ��%d\n", i, *ptr);
        ptr++;//��int�����У�������λΪ4byte�����ptr++ʵ������+4��ָ����һ������
    }
}