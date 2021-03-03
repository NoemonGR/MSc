#include <stdio.h>

// if( boolean_expression 1)
// { /* κώδικας που θα εκτελεστεί εφόσον η συνθήκη 1
// είναι αληθής */
// if(boolean_expression 2)
// { /* κώδικας που θα εκτελεστεί εφόσον η συνθήκη 2
// είναι αληθής */ } }

int main()
{
    int a = 10;
    int b = 20;

    if(a == 10)
    {
        if(b==20)
        {
            printf("Value of a is 10 and b is 20\n");
        }
    }
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    return 0;
}