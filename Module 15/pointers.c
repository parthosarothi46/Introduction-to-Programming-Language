#include<stdio.h>

int main()
{
    int x = 30;
    printf("%d\n",x);
    printf("%p\n",&x);

    int* ptr;
    ptr = &x;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    *ptr = 60;
    printf("%d\n",x);
    return 0;
}