# include <stdio.h>

int main(){
    typedef struct{
        char name[50];
        int rollno;
        char grade;
    } student;

    student s[500];

    int n;
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%s %d %c",s[i].name,&s[i].rollno,&s[i].grade);
    }

    for(int i = 0 ; i < n ; i++ ){
        printf("Student %d: %s, %d, %c\n",i+1,s[i].name,s[i].rollno,s[i].grade);
    }
}