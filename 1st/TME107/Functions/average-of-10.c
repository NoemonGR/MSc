#include <stdio.h>

int main(){
    int i,arr[10],sum=0;
    float avg=0.0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",(arr+i)); //(arr+1) is equivalent to &arr[i]
        sum=sum+*(arr+i); //8(arr+1) is equivalent to arr[i]
    }   
    avg=(float)sum/10;
    printf("Average=%f",avg);
    return 0;
}