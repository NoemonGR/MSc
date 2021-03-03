#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[30];
    int length;

    strcpy(str3,str1);
    printf("%s\n",str3);

    strcat(str1,"");
    strcat(str1, str2);
    printf("%s\n",str1);

    length = strlen(str1);
    printf("%d\n",length);

    return 0;
}