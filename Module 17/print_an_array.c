#include<stdio.h>
void print_array(int A[],int n,int a)
{
    if (a==n)
    {
        return;
    }
    
    printf("%d\n",A[a]);
    print_array(A,n,a+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    print_array(A,n,0);
    
    return 0;
}