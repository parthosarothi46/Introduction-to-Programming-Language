#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='a'&& X<='z')
    {
        printf("%c",X-32);
    }
    else
    {
        printf("%c",X+32);
    }
    return 0;
}