#include <stdio.h>

struct student {
    int am;
    char stname[20];
    char stsurname[20];
};

int main() {
    //1st Student
    struct student d1, d2;
    printf("1st Student\n");
    printf("Enter am: ");
    scanf("%d",&d1.am);
    printf("Enter Name: ");
    scanf("%s",d1.stname);
    printf("Enter Surname: ");
    scanf("%s",d1.stsurname);

    //2nd Sutdent
    printf("2nd Student\n");
    printf("Enter am: ");
    scanf("%d",&d2.am);
    printf("Enter Name: ");
    scanf("%s",d2.stname);
    printf("Enter Surname: ");
    scanf("%s",d2.stsurname);

    printf("*********************************\n");

    printf("First Student: %s %s with AM: %d\n",d1.stname,d1.stsurname,d1.am);
    printf("Second Student: %s %s with AM: %d\n",d2.stname,d2.stsurname,d2.am);

    return 0;
}