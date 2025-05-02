#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int minimum;
    int maximum;
    //maximum
    if(A>=B && A>=C)
    {
        maximum = A;
    }
    else if (B>=C && B>=A)
    {
        maximum = B;
    }
    else
    {
        maximum = C;
    }
    //minimum
    if(A<=B && A<=C)
    {
        minimum = A;
    }
    else if (B<=C && B<=A)
    {
        minimum = B;
    }
    else
    {
        minimum = C;
    }
    printf("%d %d",minimum,maximum);
    return 0;
    
}