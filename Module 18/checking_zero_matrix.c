#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int total_value = r*c;
    int zero = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                zero++;
            }
        }
    }
    if (zero==total_value)
    {
        printf("This is zero matrix");
    }
    else
    {
        printf("This is not a zero matrix");
    }
    
    
    return 0;
}