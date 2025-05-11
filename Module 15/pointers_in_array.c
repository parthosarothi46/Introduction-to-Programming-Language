#include<stdio.h>

int main()
{
    int x[5] = {10,20,30,40,50};
    printf("%p\n",&x[0]);
    printf("%p\n",&x[1]);
    printf("%p\n",&x[2]);
    printf("%p\n",&x[3]);
    printf("%p\n",&x[4]);
    *x = 100;
    *(x+1) = 200;
    printf("%d\n",x[0]);
    printf("%d\n",x[1]);
    return 0;
}