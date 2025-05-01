#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even Number\n");
        if(n%4==0)
        {
            printf("Divisible By 4\n");
        }
        else
        {
            printf("Not Divisible By 4\n");
        }
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}