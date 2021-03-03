#include <stdio.h>
#include <stdlib.h>

struct student {
    int am;
    char stname[20];
    char stsurname[20];
};

int main() {
    //As many students as I want with for loop
    struct student *ptd;
    int n=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    ptd = (struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++){
        printf("Student %d\n",i+1);
        printf("Enter am: ");
        scanf("%d",&(ptd+i)->am); 
        printf("Enter Name: ");
        scanf("%s",(ptd+i)->stname);
        printf("Enter Surname: ");
        scanf("%s",(ptd+i)->stsurname);
    }

    printf("*********************************\n");

    for(int i=0;i<n;i++){
        printf("Student %d: %s %s with AM: %d\n",i+1,(ptd+i)->stname,(ptd+i)->stsurname,(ptd+i)->am);
    }

    printf("*********************************\n");

    return 0;
}