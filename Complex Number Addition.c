# include <stdio.h>

typedef struct{
    int real;
    int img;
} Complex;

Complex add(Complex c1,Complex c2){
    Complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
    return result;
}

int main(){
    Complex c1, c2, sum;

    scanf("%d %d",&c1.real,&c1.img);
    scanf("%d %d",&c2.real,&c2.img);

    sum = add(c1,c2);

    printf("Sum = %d + %di",sum.real,sum.img);

    return 0;
}

