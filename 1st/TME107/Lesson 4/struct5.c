#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char stname[20];
    char stsurname[20];
};

int main() {
    //1st Student
    struct student *ptd;
    ptd = (struct student*)malloc(2*sizeof(struct student));

    printf("1st Student\n");
    printf("Enter am: ");
    scanf("%d",&(ptd+0)->am); 
    printf("Enter Name: ");
    scanf("%s",(ptd+0)->stname);
    printf("Enter Surname: ");
    scanf("%s",(ptd+0)->stsurname);

    //2nd Sutdent
    printf("2nd Student\n");
    printf("Enter am: ");
    scanf("%d",&(ptd+1)->am);
    printf("Enter Name: ");
    scanf("%s",(ptd+1)->stname);
    printf("Enter Surname: ");
    scanf("%s",(ptd+1)->stsurname);

    printf("*********************************\n");

    printf("First Student: %s %s with AM: %d\n",(ptd+0)->stname,(ptd+0)->stsurname,(ptd+0)->am);
    printf("Second Student: %s %s with AM: %d\n",(ptd+1)->stname,(ptd+1)->stsurname,(ptd+1)->am);

    return 0;
}