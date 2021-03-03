#include <stdio.h>

int addTwoNumbers (int a, int b);

void sayHello();

int sum1(int n);

int sum2(int i);

int main(){
    float number, sum, average = 0;
    int counter=0;

    for (int j=1;j<=10;j++){
        printf("Enter a number%d:",j);
        scanf("%f",&number);

        if(number<0){
            continue;//ousiastika den metraei otidipote katw apo 0
        }
        sum += number; //grafete kai sum = sum + number
        counter++;
    }
    average = sum/counter;

    printf("Sum= %f\n",sum);
    printf("Average is: %lf\n",average);

    printf("%d\n",addTwoNumbers(3,4));

    sayHello();

    printf("%d\n",sum1(10));

    printf("%d",sum2(10));

    return 0;
}

int addTwoNumbers (int a, int b){
    return a+b;
}

void sayHello(){
    printf("Hello!\n");
}

int sum1(int n){
    if(n!=0){
        return n + sum1(n-1);
    }
    else {
        return n;
    }
}

//mia sum me for anti gia recursions

int sum2(int i){
    for (i!=0;i-1;i++){
        return i+sum2(i-1);
    }
}