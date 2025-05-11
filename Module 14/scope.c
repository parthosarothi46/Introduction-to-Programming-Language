#include<stdio.h>
int x = 10;
int sum()
{
    int y = 20;
    printf("Global x from sum - %d\n",x);
    printf("Y from sum - %d\n",y);
}
int main()
{
    int y = 30;
    printf("Global x from main - %d\n",x);
    printf("Y from main - %d\n",y);
    sum();
    return 0;
}