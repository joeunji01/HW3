#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- ������ 2021076020 -----]\n");

    printf("one = %p\n", one); //�迭 one �ּ� 
    printf("&one = %p\n", &one); //�迭 one �ּ�
    printf("&one[0] = %p\n", &one[0]); //&one=&one[0]
    printf("\n");

    print1(&one[0], 5); //������ �Ű������� �ּҰ� ȣ��

    return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");

    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i =&ptr[i], *(ptr+i)=*ptr[i] 
        //ptr=�迭 one�� �ּҸ� �������

    printf("\n");
}