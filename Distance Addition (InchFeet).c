# include <stdio.h>

typedef struct{
    int feet;
    int inches;
} Distance;

int main(){
    Distance d1,d2,sum;
    
    scanf("%d %d",&d1.feet,&d1.inches);
    scanf("%d %d",&d2.feet,&d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if(sum.inches >= 12){
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

    printf("Sum = %d feet %d inches",sum.feet,sum.inches);
}