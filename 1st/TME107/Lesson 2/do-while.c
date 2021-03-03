#include <stdio.h>

// do
// {
// statement(s);
// } while( condition );


int main()
{
    int i = 10;
    do
    {
        printf("value of i: %d\n",i);
        i=i+1;
    } while (i<20);
    return 0; 
}
