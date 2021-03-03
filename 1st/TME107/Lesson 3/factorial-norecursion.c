#include <stdio.h>

int main(void)
{
    int i,n,fact =1;

    printf("Please enter a psotive integer\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact=fact*i;
    
    printf("%d!=%d\n",n,fact);

    return 0;
}