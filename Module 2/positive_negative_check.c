#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num == 0)
    {
        return 0;
    }
    if(num >= 1)
    {
        printf("Positive number\n");
    }
    else
    {
        printf("Negative number\n");
    }
    return 0;
}