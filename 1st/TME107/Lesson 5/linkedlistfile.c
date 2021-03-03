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

struct studentdata {
    int am;
    char stname[20];
    char stsurname[20];
    struct student *next;
};

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

void save() {
    struct student *r;
    r=head;
    if (r==NULL){
        return;
    }
    FILE *fptr;
    fptr=fopen("./data/studentlist.dat","wb");
    if(fptr==NULL){
        printf("Something went wrong with the file");
        return;
    }
    while(r!=NULL) {
        fwrite(r,sizeof(struct student),1,fptr);
        r=r->next;
    }
    fclose(fptr);
    printf("List saved successfully\n");    
}

void load(){
    head=NULL;
    FILE *fptr;
    struct student s;
    if(fptr==NULL){
        printf("Something went wrong with the file");
        return;
    }    
    fptr=fopen("./data/studentlist.dat","rb");
    printf("Started loading students!\n");
    while (fread(&s,sizeof(struct student),1,fptr)){
        add(s.am,s.stname,s.stsurname);
    }
    fclose(fptr);
    printf("Data loaded to linked list!\n");
}

void count() {
    struct student *r;
    r=head;
    int counter=0;
    if (r==NULL){
        return;
    }
    while(r!=NULL) {
        counter++;
        r=r->next;
    } 
    printf("Number of students inside list: %d!\n",counter);
}

int main(){
    int selection;
    int am;
    char stname[20],stsurname[20];
    while(1){
        printf("Menu\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Count Students\n");
        printf("4. Save List\n");
        printf("5. Load List\n");
        printf("6. Exit\n");
        printf("Please make a choice: ");
        scanf("%d",&selection);
        if (selection==6){
            printf("Bye bye....");
            return 0;
        }
        else if(selection==3){
            count();
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
        else if(selection==4){
            save();
        }
        else if(selection==5){
            load();
        }        
    }
    return 0;
}