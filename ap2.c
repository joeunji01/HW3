#include <stdio.h>
#include <stdlib.h>
int main()
{
int list[5];
int *plist[5];

list[0] = 10;
list[1] = 11;

plist[0] = (int*)malloc(sizeof(int)); //plist[0] 동적할당

printf("[----- 조은지 2021076020 -----]\n");

printf("list[0] \t= %d\n", list[0]); //list[0]=10
printf("address of list \t= %p\n", list); //list는 배열 주소를 가지고 있음 =list의 주소
printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 주소 =list의 주소
printf("address of list + 0 \t= %p\n", list+0); //list+0= &list[0]
printf("address of list + 1 \t= %p\n", list+1); //list+1= &list[1]
printf("address of list + 2 \t= %p\n", list+2); //list+2= &list[2]
printf("address of list + 3 \t= %p\n", list+3); //list+3= &list[3]
printf("address of list + 4 \t= %p\n", list+4); //list+4= &list[4]
printf("address of list[4] \t= %p\n", &list[4]); //list+4= &list[4]

free(plist[0]); 
}
