#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j;
    printf("unesi n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" %d \t",i*j);
        }
        printf("\n");
    }

}