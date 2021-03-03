#include <stdio.h>

int a[10] ,b[10] ,c[10];

/* Function "retrieve" retrieves the values from B[i] and C[i] */
int retrieve(int n,int flag){
    if(flag==1)
        return b[n];
    else
        return c[n];
}

/* Function update add B[i] and C[i] in A[i] */
void update(int n,int value){
    a[n]=value;
}

int main(){
    int x,y, sum;

    /* Input data for B[] and C[] */
    printf("-----------------------------------------\n");
    printf("| Enter the data for table B[] and C[]: |\n");
    printf("-----------------------------------------\n");
    for(int i=0; i<10; i++){
        printf("B[%d]: ",i,"\n");
        scanf("%d", &b[i]);
        printf("C[%d]: ",i,"\n");
        scanf("%d", &c[i]);
    }

    for(int i=0; i<10; i++){
        x=retrieve(i,1); // Call function retrive for B[]
        y=retrieve(i,0); // Call function retrive for C[]
        sum=x+y;
        update(i,sum);   // Call function update
    }

    /* Print table C[] */
    printf("---------------------\n");
    printf("| Table A[] values: |\n");
    printf("---------------------\n");
    for(int i=0; i<10; i++){
        printf("A[%d]:%d\n",i,a[i]);
    }

    return 0;
}
