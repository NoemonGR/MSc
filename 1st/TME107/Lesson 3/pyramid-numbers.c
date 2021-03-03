#include<stdio.h>

int main(void)
{
    int i,j,num;

    printf("Enter an integer:");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        for(j=0;j<i;j++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}