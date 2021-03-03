#include <stdio.h>

int main()
{
    char str[50];
    int i;

    printf("Give two values:");
    scanf("%s %d",str,&i);

    printf("\n You entered: %s, %d",str,i);

    return 0;
}