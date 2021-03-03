#include <stdio.h>

// if(boolean_expression)
// { /* κώδικας που θα εκτελεστεί εφόσον η συνθήκη
// είναι αληθής */ }
// else
// { /* κώδικας που θα εκτελεστεί εφόσον η συνθήκη
// είναι ψευδής */ }

int main(){
    int a = 50;

    if(a<20)
    {
        printf("a is less than 20\n");
    }
    else
    {
        printf("a is not less than 20\n");
    }
    printf("a: %d\n",a);

    return 0;
}