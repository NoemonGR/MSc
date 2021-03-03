#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char stname[20];
    char stsurname[20];
};

// H moni allagi pou kanoume einai na desmeusoume dinamika mnimi!
// ptd1,ptd2

int main() {
    //1st Student
    struct student *ptd1,*ptd2;
    ptd1 = (struct student*)malloc(sizeof(struct student));
    ptd2 = (struct student*)malloc(sizeof(struct student));

    printf("1st Student\n");
    printf("Enter am: ");
    scanf("%d",&ptd1->am); 
    printf("Enter Name: ");
    scanf("%s",ptd1->stname);
    printf("Enter Surname: ");
    scanf("%s",ptd1->stsurname);

    //2nd Sutdent
    printf("2nd Student\n");
    printf("Enter am: ");
    scanf("%d",&ptd2->am);
    printf("Enter Name: ");
    scanf("%s",ptd2->stname);
    printf("Enter Surname: ");
    scanf("%s",ptd2->stsurname);

    printf("*********************************\n");

    printf("First Student: %s %s with AM: %d\n",ptd1->stname,ptd1->stsurname,ptd1->am);
    printf("Second Student: %s %s with AM: %d\n",ptd2->stname,ptd2->stsurname,ptd2->am);

    return 0;
}