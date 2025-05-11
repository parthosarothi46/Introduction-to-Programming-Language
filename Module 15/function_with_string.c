#include<stdio.h>
void fun(char x[])
{
    printf("%s\n",x);
}
int main()
{
    char x[10];
    scanf("%s",x);
    fun(x);
    return 0;
    
}