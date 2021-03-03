#include <stdio.h>

int arr[20];

void mymethod(int size, int a[]){
    //int size_of_array = sizeof(a)/sizeof(a[0]);
    //printf("%d\n",size_of_array);     
}

int main(){
    // printf("%d\n",sizeof(arr));
    // printf("%d\n",sizeof(int));
    int size_of_array = sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",size_of_array);
    // mymethod(20,arr);

    int n;
    int arr2[100];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int max1,max2;
    max1=arr2[0];
    max2=arr2[0];
    for(int i=0;i<n;i++){
        if(arr2[i]>max1){
            max2 = max1;
            max1 = arr2[i];
        }
        else if(arr2[i]<max1 && arr2[i]>max2){
            max2=arr2[i];
        }
    }
    printf("First biggest number of array: %d\n",max1);
    printf("Second biggest number of array: %d\n",max2);
    return 0;
}