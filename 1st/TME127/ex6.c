#include<stdio.h>

int stack[5], top;

/* push element in stack */
void push()
{
    int data;
    if(top==4)
    {
        printf("Stack if full\n");
    }
    else
    {
        printf("Give your number: ");
        scanf("%d",&data);
        top++;
        stack[top] = data;
    }
}

/* pop element from stack */
void pop()
{
    int deleteItem;
    if(top==-1)   //check if stack is empty
    {
        printf("Stack if empty\n");
    }
    else
    {
        deleteItem = stack[top];
        printf("The deleted items is: %d\n",deleteItem);
        top--;
    }
}

/* display the elements */
void display()
{
    if(top==-1) //check if stack is empty
    {
        printf("Stack if empty\n");
    }
    else
    {
        printf("The data is:\n");
        for(int i=0; i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void calculation() {
    int stackElement1, stackElement2, stackElement3, stackElement4, stackElement5, result, n=4;
    stackElement1 = stack[0];
    stackElement2 = stack[1];
    stackElement3 = stack[2];
    stackElement4 = stack[3];
    stackElement5 = stack[4];

    if (top == 4) {
        for (int i = 0; i < 5; i++) {
            for (int j = n; j >= 0; j--) {
                printf("%d ", stack[j]);
            }
            printf("\n");
            n--;
        }
        result = stackElement1 + ((stackElement2 - stackElement3) * (stackElement4 + stackElement5));
        printf("Result: %d\n", result);
    } else {
        printf("You haven't fill the stack\n");
    }
}

int main(){

    int selection;
    top=-1;

    printf("*********************************************************\n");
    printf("* For the presentation we need a stack with five values *\n");
    printf("* Example: Stack [2, 10, 3, 2, 3] | 2+[(10-3)*(8+3)]    *\n");
    printf("*********************************************************\n");
    while(1) {
        printf("Menu\n");
        printf("1. push\n");
        printf("2. pop from stack\n");
        printf("3. display\n");
        printf("4. calculation \n");
        printf("5. Exit\n");
        printf("Give your selection: ");
        scanf("%d", &selection);

        if (selection == 1) {
            push();  // call the push function
        } else if (selection == 2) {
            pop(); // call the pop function
        } else if (selection == 3) {
            display(); // call the display function
        } else if (selection == 4) {
            calculation(); // call the calculation function
        } else if (selection == 5) {
            printf("Bye bye...\n");  // exit from the program
            return 0;
        } else {
            printf("Wrong selection!\n");
            return 0;
        }
    }
}
