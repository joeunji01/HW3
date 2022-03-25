#include <stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- ������ 2021076020 -----]\n");
    
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; //0~99
    
    /* for checking call by reference */
    printf("address of input = %p\n", input); //�迭 �ּ�=input�� ��

    answer = sum(input, MAX_SIZE); //input �迭�� �ּҰ��� ���� ->������ ���� ȣ��
    printf("The sum is: %f\n", answer); 
}

float sum(float list[], int n) //list�� input ������ ���� ȣ��
{
    printf("value of list = %p\n", list); //�Ű����� list <-input�� ��
    printf("address of list = %p\n\n", &list); //�Ű����� list�� �ּ�

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];

    return tempsum;
}
