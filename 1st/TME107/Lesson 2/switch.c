#include <stdio.h>
#include <stdio.h>

// switch(expression){
// case constant-expression :
// statement(s);
// break; /* προαιρετικό */
// case constant-expression :
// statement(s);
// break; /* προαιρετικό */
// …..
// /* οποιοσδήποτε αριθμός δηλώσεων */
// default : /* προαιρετικό */
// statement(s);
// }

int main()
{
    char grade = 'C';
    switch(grade)
    {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very good!\n");
            break;
        case 'C':
            printf("Good!\n");
            break;
        case 'D':
            printf("Pass!\n");
            break;
        case 'F':
            printf("Fail!\n");
            break;     
        default:
            printf("Invalid grade\n"); 
    }
    printf("Your grade is %c\n",grade);
    return 0;
}

//nested switch syntax
// switch(ch1)
// {
// case 'A':
// statement(s);
// switch(ch2)
// {
// case 'A':
// statement(s);
// break;
// case 'B': /* κώδικας εντός του Β */
// }
// break;
// case 'B': /* κώδικας εκτός του Β */
// }