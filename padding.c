#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    printf("[----- ������ 2021076020 -----]\n");
    struct student pst; //����ü ���� ����
    
    printf("size of student = %ld\n", sizeof(struct student)); 
    //����ü�� ũ�� char 13bytes -> 3bytes padding, int 4bytes, short 2bytes -> 2bytes padding 
    //13+3 +4+ 2+2 =24bytes
    printf("size of int = %ld\n", sizeof(int)); //int�� ũ�� =4bytes
    printf("size of short = %ld\n", sizeof(short)); //short�� ũ�� 2bytes
    
    return 0;
}