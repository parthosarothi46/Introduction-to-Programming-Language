#include<stdio.h>
void fun(int x[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",x[i]);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    fun(x,n);
    return 0;
    
}