#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int n;
    p:
    printf("unesi celi broj\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("sa nulom se ne deli pogresan unos\n");
        goto p;
    }
    else
    {
        printf("reciprocna vrednost broja je %.4f\n",1.0/n);
    }
    return 0;
}