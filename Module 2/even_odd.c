#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}