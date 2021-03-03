#include <stdio.h>

changevalues(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
};

int main()
{
    int num1=10;
    int num2=5;

        changevalues(&num1,&num2);

        printf("The two numbers are: %d and %d\n",num1,num2);
        return 0;
}