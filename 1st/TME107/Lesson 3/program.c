#include <stdio.h>
#include <string.h>

struct Student{
    char name[30];
    char AM[12];
    int grade;
    float average;
    int age;
};

struct StudentV2 {
    char* name;
    char* AM;
    int grade;
    float average;
    int age;
};

//Typedefs can also simplify definitions or declarations for structure pointer types.
typedef struct Professor {
    char Name[30];
    int age;
}prof;

struct Omada {
    struct Student std1;
    struct Student std2;
    struct Student std3;
};

int main(){
    char temp1[] = {'H','e','i'};
    char temp2[] = {"Hello"};         
    char temp3[20] = "Hello";           //temp1=2=3 ---- temp3 o pio swstos tropos

    char name[30];

    printf("Please give a name: ");
    scanf("%s",name);

    printf("Your name is: %s!\n",name);
    printf("%x\n",name);

    strnlen() function returns the number of bytes
    printf("Your name at least %d characters.",strnlen(name,20)); //20 max characters --- strlen-->strnlen

    printf("Please give a string: ");
    char str1[30];
    scanf("%s",str1);

    printf("Please give one more string: ");
    char str2[30];
    scanf("%s",str2);

    //strcmp() compares two strings character by character
    if (strcmp(str1,str2)==0){
        printf("Strings are exactly the same.\n");
    }
    else {
        printf("String do not match....\n");
    }

    // strncmp function returns a negative, zero, or positive integer depending on whether 
    // the first n characters of the object pointed to by s1 are less than, equal to, or greater 
    // than the first n characters of the object pointed to by s2

    if (strncmp(str1,str2,5)==0){
        printf("First parts of string are the same.\n");
    }
    else {
        printf("String do not match....\n");
    }

    // The strcat() function concatenates the destination string and the source string, 
    // and the result is stored in the destination string.

    strcat(str1," ");
    strcat(str1,str2);
    // strncat(str1,str2,4); //copy only 4 characters
    printf("Your 2 strings combined are: %s",str1);    

    char str3[40];
    char str4[10];
    char sentence[100];
    char c;
    char c1[5];
    char searchStr[10];

    printf("Give me a string: ");
    scanf("%s",str3);

    printf("Give me a char: ");
    scanf("%s",&c1);
    // c = 'e';

    //The strchr() function finds the first occurrence of a character in a string.
    printf("%s",strchr(str3,c1[0]));

    puts("Give me a sentence: ");
    gets(sentence);
    
    printf("Give me another, smaller, string: ");
    scanf("%s",str4);

    // printf("%s",strstr(str3,str4));
    printf("%s",strstr(sentence,str4));


    struct Student std1;

    the strcpy function copies the string pointed to by s2 into the object pointed to by s1
    strcpy(std1.name,"Stelios");
    strcpy(std1.AM,"MPPL6584");
    std1.grade = 8;

    printf("Please give a name: ");
    scanf("%s",std1.name);
    printf("Please give an AM: ");
    scanf("%s",std1.AM);
    printf("Please give a grade: ");
    scanf("%d",&std1.grade);

    printf("%s %s %d",std1.name,std1.AM,std1.grade);

    prof prof1;
    prof1.age = 40;

    struct Student std2 = {.age=30,.grade=10,.average=7.5}; // Designated initializers

    struct StudentV2 std3;
    // std3.name = "Sofia";
    std3.grade = 9;
    char tempStr[]="Periklis";
    // printf("%x\n",tempStr);
    std3.name = tempStr;
    std3.AM = "mppl987654";
    struct StudentV2 std5 = {.name="Paraskevi",.AM="mppl678432",.grade=7,.age=21};
    // strcpy(std3.name,"Sofia"); //error in pycharm?works in vs
    // printf("%s %s %d",std3.AM,std3.name,std3.grade);

    int num = 10;
    printf("Value of num is: %d\n",num);
    printf("Address of num is : %x\n",&num);

    int* p; // Dilosi pointer
    p=&num; // Perasma timis se metavliti pointer
    printf("Stored address in p: %x\n",p);
    printf("Value stored in p: %d\n",*p); // prosvasi stin timi tou pointer

    // an kai to p allaxe tis apothikeuei stin idia thesi aka dieuthinsi
    *p = 15;
    printf("Stored address in p: %x\n",p);
    printf("Value stored in p: %d\n",*p);
    printf("Value of num is: %d\n",num);
    printf("Address of num is : %x\n",&num);

    //changed again //den prepei na to kaneis
    p=p+1;
    printf("Stored address in p: %x\n",p);
    printf("Value stored in p: %d\n",*p);

    *p=25;
    printf("Stored address in p: %x\n",p);
    printf("Value stored in p: %d\n",*p);
    printf("Value of num is: %d\n",num);
    printf("Address of num is : %x\n",&num);
    return 0;
}