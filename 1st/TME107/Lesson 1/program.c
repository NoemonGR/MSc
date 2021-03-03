#include <stdio.h>

//global variables
int z;

//int a & b = parametroi
int addTwoNumbers(int a, int b){
    int c = a+b;
    return c;
}

void doSomething(){
    printf("Hello");
}

int main(){
    //local variables
    int i;
    i - 124;
    int j = 543; 
    i = 23;
    float f;
    const float pi=3.14;


    //array declaration
    int marks[10];//one dimension array
    //array initilization
    marks[6]=7;
    marks[0]=5;
    marks[9]=3;
    //read from array
    int v = marks[6];
    

    //two dimension array
    double coordinates[100][2];
    coordinates[0][0]= 1.7654387654;
    coordinates[0][1]= 1.987634567;

    int myarray[8]={12,3,7,33,1,9,2,0};

    int twodarray[4][3]={{1,2,3},{2,5,1},{12,23,18},{0,1,7}};

    int q;
    int myarray2[q];


    printf("Hello, World!\n");
    int sum = addTwoNumbers(5,12);
    // doSomething();
    printf("%d\n",sum);
    float f2 = 3.14;
    printf("%f\n",f2);
    char c1 = 'a';
    printf("%c\n",c1);
    printf("--------------------------------------------\n");
    printf("Please give an integer!\n");
    int d1;
    scanf("%d",&d1);
    printf("Please give one more integer!\n");
    int d2;
    scanf("%d",&d2);
    int sum2 = addTwoNumbers(d1,d2);
    printf("The sum of two numbers is: %d",sum2);
    return 0;
}