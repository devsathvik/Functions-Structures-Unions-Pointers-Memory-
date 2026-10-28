//===== Write Your Logic Here =====
# include <stdio.h>

struct point{
    int x;
    int y;
};

struct circle{
    struct point centre;
    int r;
};

int main(){
    struct circle c;
    scanf("%d %d %d",&c.centre.x,&c.centre.y,&c.r);
    printf("%d %d %d",c.centre.x,c.centre.y,c.r);
}

