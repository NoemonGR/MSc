#include <stdio.h>

//Stin C opou exoume (*deiktis).a auto mporei na graftei
//isodinama ws deiktis-> a
//e.x (*ptr).a isodinamei me ptr->a

//ean grapso *ptd.a 
//to asteraki paei kai sto ptd kai sto a
//giauto (*ptd).a

struct student {
    int am;
    char stname[20];
    char stsurname[20];
};

int main() {
    //1st Student
    struct student d1, d2;
    struct student *ptd1,*ptd2;
    ptd1 = &d1;
    ptd2 = &d2;
    printf("1st Student\n");
    printf("Enter am: ");
    scanf("%d",&ptd1->am); // d1 einai to idio me *(&d1) ara kai idio me *(ptd1)
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