# include <stdio.h>

int main(){
    typedef struct{
        char name[10];
        int rollno;
        char grade;
    } student ;

    student s1;

    scanf("%s",s1.name);
    scanf("%d",&s1.rollno);
    scanf(" %c",&s1.grade);

    printf("Student Details:\nName: %s\nRoll No: %d\nGrade: %c",s1.name,s1.rollno,s1.grade);
}