#include <stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

int main(void)
{
    printf("[----- 조은지 2021076020 -----]\n");
    
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; //0~99
    
    /* for checking call by reference */
    printf("address of input = %p\n", input); //배열 주소=input의 값

    answer = sum(input, MAX_SIZE); //input 배열은 주소값을 가짐 ->참조에 의한 호출
    printf("The sum is: %f\n", answer); 
}

float sum(float list[], int n) //list에 input 참조에 의한 호출
{
    printf("value of list = %p\n", list); //매개변수 list <-input의 값
    printf("address of list = %p\n\n", &list); //매개변수 list의 주소

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];

    return tempsum;
}
