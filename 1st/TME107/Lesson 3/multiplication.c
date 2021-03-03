#include <stdio.h>

int main(){
    int num,i = 1;
    printf("\n Enter an integer: ");
    scanf("%d",&num);

    printf("Multiplication table of %d: \n",num);
    while(i<=10)
    {
        printf("\n%d x %d= %d",num,i,num * i);
        i++;
    }

    return 0;
}