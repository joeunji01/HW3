#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5]; //�迭 list
    int *plist[5]={NULL}; //�迭������ plist ->NULL�� �ʱ�ȭ
    plist[0]=(int*)malloc(sizeof(int)); //plist[0]�� �����Ҵ� 

    list[0]=1;
    list[1]=100;
    *plist[0]=200; 
    
    printf("[----- ������ 2021076020 -----]\n");

    printf("value of list[0]=%d\n",list[0]); //list[0]�� �� =1
    printf("address of list[0] =%p\n", &list[0]); //list[0]�� �ּ�=list�� �ּ� (&list)
    printf("value of list =%p\n", list); //list�� �ּҸ� �������
    printf("address of list (&list) =%p\n", &list); //&list=&list[0]

   printf("-----------------------------------------\n\n");
   printf("value of list[1] =%d\n",list[1]); //list[1]�� �� =100
   printf("address of list[1] =%p\n", &list[1]); //list[1]�� �ּ� =&list[0] +4byte (32bit)
   printf("value of *(list+1) =%d\n", *(list+1)); //list[1]�� ��
   printf("address of list+1 =%p\n", list+1); //list+1 =list + 4byte
   
   printf("----------------------------------------\n\n");
   
    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]=200
    printf("&plist[0] = %p\n", &plist[0]); //�迭������ plist�� �ּ�
    printf("&plist = %p\n", &plist); //&plist= &plist[0]
    printf("plist = %p\n", plist); //�迭�����ʹ� �ּҰ��� ������ ���� =plist�� �ּ�
    printf("plist[0] = %p\n", plist[0]); //heap�� �Ҵ�� plist�� �ּ�
    printf("plist[1] = %p\n", plist[1]); //plist+1 = �Ҵ���� ���� (NULL)
    printf("plist[2] = %p\n", plist[2]); //�Ҵ���� ���� (NULL)
    printf("plist[3] = %p\n", plist[3]); //�Ҵ���� ���� (NULL)
    printf("plist[4] = %p\n", plist[4]); //�Ҵ���� ���� (NULL)

    free(plist[0]);
}