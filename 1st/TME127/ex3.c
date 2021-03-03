/*
Σε μια συλλογή στοιχείων, κάθε στοιχείο περιέχει πληροφορίες για τους
φοιτητές του μεταπτυχιακού, όπως αριθμό μητρώου, επώνυμο, όνομα, πατρώνυμο,
διεύθυνση κατοικίας, αριθμό σταθερού τηλεφώνου, αριθμό κινητού τηλεφώνου και
επιλεγμένο μάθημα πρώτου εξαμήνου.
▪ Να γραφεί κώδικας C για την αναπαράσταση ενός εγγραφήματος φοιτητή.
▪ Να γραφεί κώδικας C για την αναπαράσταση του συνόλου των φοιτητών
χρησιμοποιώντας έναν πίνακα εγγραφημάτων.
▪ Να χρησιμοποιηθεί μια δομή δείκτη για την πρόσβαση σε όλους τους φοιτητές
που έχουν επιλέξει ένα συγκεκριμένο μάθημα.
*/

#include <stdio.h>
#include <stdlib.h> //για την malloc
#include <string.h> //για το string copy (strcpy απο struct students στο temp)

//δήλωση δομής δεδομένων
struct students{
    int am;
    char stsurname[20];
    char stname[20];
    char fname[20];
    char street[40];
    int streetnum;
    int tel;
    long int mobile; //It takes digits, returns with scanf the value//ps:for some reason when input is for example 6977777777 it returns -14XXXXXXXX, although pointer is right
    int lessonID;
    struct students *next; //διεύθυνση του επόμενου στοιχείου
};
struct students* head; // ξεκίνημα λίστας

//πρόσθεση νέου φοιτητή
void add(int am,char stsurname[20],char stname[20],char fname[20],char street[40],int streetnum,int tel,long int mobile,int lesssonID){
    struct students *temp; //temporary struct pointer
    temp=(struct students *)malloc(sizeof(struct students)); //δέσμευση bytes για τον δείκτη
    temp->am=am; // αποθήκευση am στο temp 
    strcpy(temp->stsurname,stsurname);
    strcpy(temp->stname,stname);
    strcpy(temp->fname,fname);
    strcpy(temp->street,street);
    temp->streetnum=streetnum;
    temp->tel=tel;
    temp->mobile=mobile;
    temp->lessonID=lesssonID;
    if (head== NULL){ //δεν έχει τίποτα  μέσα το head
        head=temp;
        head->next=NULL; //δεν υπάρχει στοιχείο
    }
    else{
        temp->next = head; //υπάρχει στοιχείο
        head=temp;
    }
}

//διαγραφή φοιτητή με τον αριθμό μητρώου του
void delete(int am){
    struct students *h, *prev;
    h=head;
    prev=head;
    if(h==NULL){
        printf("\nThere is no data...\n");
        return;
    }
    while(h!=NULL){
        if (h->am==am){
            if (h==head){
                head=h->next;
                free(h);
            }
            else {
                prev->next=h->next;
                free(h);
                break;
            }
        }
        else{
            prev=h;
            h=h->next;
        }
    }
}

//ψάξε φοιτητή με τον αριθμό μητρώου του
void search(int am){
    struct students *h;
    h=head;
    if (h==NULL){
        printf("There is no data... \n");
        return;
    }
    printf("\n\n***************************************\n\n");
    while(h!=NULL){
        if (h->am==am){
            printf("Student:%s %s \n\tAM:%d \n\tFather's Name:%s \n\tStreet:%s \n\tStreet Number:%d \n\tTelephone:%d \n\tMobile:%d\n\n",h->stname,h->stsurname,h->am,h->fname,h->street,h->streetnum,h->tel,h->mobile);
            break;
        }
        else {
            h=h->next;
        }
    }
    printf("***************************************\n\n");
}


//Ψάξε με το ID του μαθήματος
void searchlesson(int lessonID){
    struct students *h;
    h=head;
    if (h==NULL){
        printf("There is no data... \n");
        return;
    }
    printf("\n\n***************************************\n\n");
    while(h!=NULL){
        if (h -> lessonID == lessonID){
            printf("Student:%s %s \n\tAM:%d \n\tFather's Name:%s \n\tStreet:%s \n\tStreet Number:%d \n\tTelephone:%d \n\tMobile:%d \n\tLessonID:%d\n\n",h->stname,h->stsurname,h->am,h->fname,h->street,h->streetnum,h->tel,h->mobile,h->lessonID);
            break;
        }
        else {
            h=h->next;
        }
    }
    printf("***************************************\n\n");
}

//επεξεργασία φοιτητή
void edit(int am,char stsurname[20],char stname[20],char fname[20],char street[40],int streetnum,int tel,long int mobile,int lesssonID){
    struct students *h;
    h = head;
    if(h==NULL){
        printf("\nThere is no data.\n");
        return;
    }
    while(h!=NULL){
        if (h->am==am){
            strcpy(h->stsurname,stsurname);
            strcpy(h->stname,stname);
            strcpy(h->fname,fname);
            strcpy(h->street,street);
            h->streetnum=streetnum;
            h->tel=tel;
            h->mobile=mobile;
            h->lessonID=lesssonID;
            break;
        }
        else{
            h=h->next;
        }
    }
}

//δείξε μου τα στοιχεία
void  display(){
    struct students *h;
    h=head;
    if(h==NULL){
        printf("\nThere is no data...\n");
        return;
    }
    printf("\n\n***************************************\n\n");
    while(h!=NULL){
        printf("Student:%s %s \n\tAM:%d \n\tFather's Name:%s \n\tStreet:%s \n\tStreet Number:%d \n\tTelephone:%d \n\tMobile:%d \n\tLessonID:%d\n\n",h->stname,h->stsurname,h->am,h->fname,h->street,h->streetnum,h->tel,h->mobile,h->lessonID);
        h=h->next;
    }
    printf("***************************************\n\n");
}

//save σε ένα txt
void save(){
    struct students *h;
    h=head;
    if(h==NULL){
        printf("\nNo data to save...\n");
        return;
    }
    printf("\n\n***************************************\n\n");
    FILE *text;
    text = fopen("./Students.txt","wb");
    while(h!=NULL){
        fprintf(text,"Student:%s %s \n\tAM:%d \n\tFather's Name:%s \n\tStreet:%s \n\tStreet Number:%d \n\tTelephone:%d \n\tMobile:%d \n\tLessonID:%d\n\n",h->stname,h->stsurname,h->am,h->fname,h->street,h->streetnum,h->tel,h->mobile,h->lessonID);
        h=h->next;
    }
    fclose(text);
    printf("***************************************\n\n");
}
//main, καλώ όλες τις function για execution
int main(){
    int selection;
    int am;
    char stsurname[20];
    char stname[20];
    char fname[20];
    char street[40];
    int streetnum;
    int tel;
    long int mobile;
    int lessonID=0;

    while(1){
        printf("\n####################################\n");
        printf("1.Add Student\n");
        printf("2.Display Students\n");
        printf("3.Delete Student\n");
        printf("4.Search Student\n");
        printf("5.Edit Student\n");
        printf("6.Save Students\n");
        printf("7.Exit\n");
        printf("8.Search with LessonID\n");
        printf("\n####################################\n\n");
        printf("Enter your choice: ");
        scanf("%d",&selection);

        if(selection==1){
            printf("Enter the student's AM: ");
            scanf("%d",&am);
            printf("Enter the student's Surname: ");
            scanf("%s",stsurname);
            printf("Enter the student's Name: ");
            scanf("%s",stname);
            printf("Enter the student's Father's Name: ");
            scanf("%s",fname);
            printf("Enter the student's Street Address: ");
            scanf("%s",street);
            printf("Enter the student's Street Number: ");
            scanf("%d",&streetnum);            
            printf("Enter the student's Telephone: ");
            scanf("%d",&tel);
            printf("Enter the student's Mobile Number: ");
            scanf("%d",&mobile);
            printf("Enter the student's LessonID: ");
            scanf("%d",&lessonID);            
            add(am,stsurname,stname,fname,street,streetnum,tel,mobile,lessonID);
        }
        else if (selection==2){
            display();
        }
        else if (selection==3){
            printf("Enter the student's AM to be deleted: ");
            scanf("%d",&am);
            delete(am);
        }
        else if (selection==4){
            printf("Enter the student's AM: ");
            scanf("%d",&am);
            search(am);
        }
        else if (selection==5){
            printf("Enter the student's AM: ");
            scanf("%d",&am);
            printf("Enter the NEW student's Surname: ");
            scanf("%s",stsurname);
            printf("Enter the NEW student's Name: ");
            scanf("%s",stname);
            printf("Enter the NEW student's Father's Name: ");
            scanf("%s",fname);            
            printf("Enter the NEW student's Street: ");
            scanf("%s",street);
            printf("Enter the NEW student's Street Number: ");
            scanf("%d",&streetnum);            
            printf("Enter the NEW student's Telephone: ");
            scanf("%d",&tel);
            printf("Enter the NEW student's Mobile Number: ");
            scanf("%d",&mobile);
            printf("Enter the NEW student's LessonID: ");
            scanf("%d",&lessonID);
            edit(am,stsurname,stname,fname,street,streetnum,tel,mobile,lessonID);
        }
        else if(selection==6){
            save();
        }
        else if (selection==7){
            return 0;
        }
        else if (selection==8){
            printf("Enter lesson ID: ");
            scanf("%d",&lessonID);
            searchlesson(lessonID);
        }
        else{
            printf("Please enter a correct choice!\n");
        }
    }
    return 0;
}

