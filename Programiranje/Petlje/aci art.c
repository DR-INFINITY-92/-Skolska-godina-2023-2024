#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j;
    printf("unesi koliko redova zelis\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("x");
        }
            
        printf("\n");
    }

}