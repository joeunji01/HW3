#include <stdio.h>
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- 조은지 2021076020 -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; //구조체 변수 선언
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; //typedef 구조체 변수 선언
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
   
    student2 st3; //typedef 구조체 변수 선언 
    st3 = st2; //구조체 복사
    printf("\nst3.lastName = %c\n", st3.lastName); //=st2.lastName
    printf("st3.studentId = %d\n", st3.studentId); //st2.studentId
    printf("st3.grade = %c\n", st3.grade); //st2.grade

    /* equality test */
    if(st3 == st2) /* not working */ //구조체끼리 비교 불가
        printf("equal\n");
    else
        printf("not equal\n");

return 0;
}