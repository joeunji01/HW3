#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("[----- ������ 2021076020 -----]\n");
    
    int **x; //���������� 
    // *(*x)=*x�� �� (�ּ�), *x=x�� ����Ű�� �������� �� 

    printf("sizeof(x) = %lu\n", sizeof(x)); //�����ͺ��� x�� ũ�� (�ּ��� ũ��)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //data�� ũ�� (int)
    printf("sizeof(**x) = %lu\n", sizeof(**x));//�ּ��� ũ��
}
