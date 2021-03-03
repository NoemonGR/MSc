#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int am;
    char stname[20];
    char stsurname[20];
    struct student *next;
};

struct student *head;

void add(int am,char stname[20], char stsurname[20]){
    struct student *temp;
    temp = (struct student*)malloc(sizeof(struct student));
    temp->am=am;
    strcpy(temp->stname,stname);
    strcpy(temp->stsurname,stsurname);

    if (head==NULL){
        head=temp;
        head->next = NULL;
    }
    else {
        temp->next=head;
        head=temp;
    }
}

void display() {
    struct student *r;
    r=head;
    if (r==NULL){
        return;
    }
    printf("*************************************\n");
    while(r!=NULL) {
        printf("Student: %s %s, with AM:%d\n",r->stname,r->stsurname,r->am);
        r=r->next;
    }
    printf("*************************************\n");    
}
int main(){
    int selection;
    int am;
    char stname[20],stsurname[20];
    while(1){
        printf("Menu\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Please make a choice: ");
        scanf("%d",&selection);
        if (selection==3){
            printf("Bye bye....");
            return 0;
        }
        else if(selection==2){
            display();
        }
        else if(selection==1) {
            printf("Enter student AM: ");
            scanf("%d",&am);
            printf("Enter student Name: ");
            scanf("%s",stname);        
            printf("Enter student Surname: ");
            scanf("%s",stsurname);
            add(am,stname,stsurname);
        }
    }
    return 0;
}