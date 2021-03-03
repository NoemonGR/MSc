#include <stdio.h>

// puts(); int puts(const char * s)
// gets(); char*gets(char*s)

int main()
{
    char yourname[100];

    printf("Enter your fullname :");
    gets(yourname);

    printf("\nYour name is: ");
    puts(yourname);

    return 0;
}