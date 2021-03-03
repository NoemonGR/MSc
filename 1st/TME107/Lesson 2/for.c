#include <stdio.h>

// for ( init; condition; increment )
// {
// statement(s);
// }

int main()
{
    int i;
    
    for(i=1;i<10;i++)
    {
        printf("value of i: %d\n",i);
    }
    return 0;
}

// atermonos vroxos || infinite-loop
// #include <stdio.h>
// int main ()
// {
// for( ; ; )
// {
// printf("This loop will never stop.\n");
// }
// return 0;
// }