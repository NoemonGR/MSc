#include <stdio.h>

int main(void)
{
    int n;

    printf("Please give an integer\n");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("Integer is Even\n");
    }

    else{
        printf("Integer is Odd\n");
    }

    return 0;
}   