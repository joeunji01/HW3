#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5]; //배열 list
    int *plist[5]={NULL}; //배열포인터 plist ->NULL로 초기화
    plist[0]=(int*)malloc(sizeof(int)); //plist[0]에 동적할당 

    list[0]=1;
    list[1]=100;
    *plist[0]=200; 
    
    printf("[----- 조은지 2021076020 -----]\n");

    printf("value of list[0]=%d\n",list[0]); //list[0]의 값 =1
    printf("address of list[0] =%p\n", &list[0]); //list[0]의 주소=list의 주소 (&list)
    printf("value of list =%p\n", list); //list는 주소를 담고있음
    printf("address of list (&list) =%p\n", &list); //&list=&list[0]

   printf("-----------------------------------------\n\n");
   printf("value of list[1] =%d\n",list[1]); //list[1]의 값 =100
   printf("address of list[1] =%p\n", &list[1]); //list[1]의 주소 =&list[0] +4byte (32bit)
   printf("value of *(list+1) =%d\n", *(list+1)); //list[1]의 값
   printf("address of list+1 =%p\n", list+1); //list+1 =list + 4byte
   
   printf("----------------------------------------\n\n");
   
    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]=200
    printf("&plist[0] = %p\n", &plist[0]); //배열포인터 plist의 주소
    printf("&plist = %p\n", &plist); //&plist= &plist[0]
    printf("plist = %p\n", plist); //배열포인터는 주소값을 가지고 있음 =plist의 주소
    printf("plist[0] = %p\n", plist[0]); //heap에 할당된 plist의 주소
    printf("plist[1] = %p\n", plist[1]); //plist+1 = 할당되지 않음 (NULL)
    printf("plist[2] = %p\n", plist[2]); //할당되지 않음 (NULL)
    printf("plist[3] = %p\n", plist[3]); //할당되지 않음 (NULL)
    printf("plist[4] = %p\n", plist[4]); //할당되지 않음 (NULL)

    free(plist[0]);
}