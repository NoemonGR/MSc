// #include <stdio.h>
// #include <string.h>


// union [union tag]
// {
//  member definition;
//  member definition;
//  ...
//  member definition;
// };


//------------------------------------------------------


//paradeigma
// union arithmos
// {
//  int i;
//  float f;
//  char str[20];
// };
// Union arithmos mynumber;

#include <stdio.h>
#include <string.h>

union arithmos
{
    int i;
    float f;
    char str[50];
};

int main()
{
    union arithmos mynumber;

    mynumber.f=1024.5;
        printf("%f\n",mynumber.f);
    strcpy(mynumber.str,"perigrafi arithmou");
        printf("%s\n",mynumber.str);
    mynumber.i=200;
        printf("%d\n",mynumber.i);
        
    return 0;
}
