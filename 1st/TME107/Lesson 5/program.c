#include <stdio.h>

int main() {
    char name[30];
    int mark,n;
    //fptr: file pointer
    FILE *fptr;
    //wb: write bytes
    fptr=fopen("./data/students.txt","wb");
    if(fptr==NULL){
        printf("Something went wrong with the file...");
        return 0;
    }
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("For student %d, enter name: ",i+1);
        scanf("%s",name);
        printf("Enter mark: ");
        scanf("%d",&mark);
        //grapse sto arxeio - file printf
        fprintf(fptr,"Name:%s, Mark:%d\n",name,mark);
    }
    fclose(fptr);
    printf("Data saved to file!");
    return 0;
}