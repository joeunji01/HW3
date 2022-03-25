#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("[----- 조은지 2021076020 -----]\n");
    
    int **x; //이중포인터 
    // *(*x)=*x의 값 (주소), *x=x가 가리키는 데이터의 값 

    printf("sizeof(x) = %lu\n", sizeof(x)); //포인터변수 x의 크기 (주소의 크기)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //data의 크기 (int)
    printf("sizeof(**x) = %lu\n", sizeof(**x));//주소의 크기
}
