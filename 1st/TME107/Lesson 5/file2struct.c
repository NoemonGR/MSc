#include <stdio.h>

struct student
{
    char name[30];
    int mark;
};

int main(){
    FILE *fptr;
    struct student s;
    //rb: read byte
    fptr =fopen("./data/structstudents.txt","rb");
    while (fread(&s,sizeof(struct student),1,fptr)){
        printf("Name: %s, Mark:%d\n",s.name,s.mark);
    }
    fclose(fptr);
}