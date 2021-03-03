#include<stdio.h>

int main(void)
{
    float celsius,fahrenheit;

    printf("Enter temperature in Celsius : \n");
    scanf("%f",&celsius);

    fahrenheit=(1.8*celsius) + 32;
    printf("Temperature in Fahrenheit:%f",fahrenheit);

    return 0;
}