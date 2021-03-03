/*
Να υλοποιηθεί μια στοίβα LIFO με χρήση συνδεδεμένης λίστας και της
γλώσσας C.
*/

//Last In - First Out
//Push - Add item to top
//Pop - Remove item from top

#include <stdio.h>
#include <stdlib.h>

//Δομή 
struct structure
{
    int info;
    struct structure *ptr;
}*top,*top1,*temp;
//temp is used in push, top1 is used in pop

int topelement(); //return top element in stack
void push(int data); //βάλε data
void pop(); //βγάλε data
void empty(); //δες αν είναι κενή
void display(); //δείξε
void destroy(); //κατέστρεψε
void stack_count(); //μέτρησε δεδομένα
void create(); //φτιάξε κενό stuck
 
int count = 0;
 
void main()
{
    int datvalue, choice, eltop; //eltop = element on top//datvalue= data value//choice=menu choice ex. 1,2
 
    printf("\n 1 - Push Data");
    printf("\n 2 - Pop Data");
    printf("\n 3 - Top Data");
    printf("\n 4 - Check IF Empty");
    printf("\n 5 - Destroy Stack");
    printf("\n 6 - Dipslay Data");
    printf("\n 7 - Stack Count");
    printf("\n 8 - Exit");
 
    create();
 
    while (1)
    {
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
 
        switch (choice)
        {
        case 1:
            printf("Enter Data : ");
            scanf("%d", &datvalue);
            push(datvalue);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No Elements In Stack...");
            else
            {
                eltop = topelement();
                printf("\nTop Element : %d", eltop);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            destroy();
            break;
        case 6:
            display();
            break;
        case 7:
            stack_count();
            break;
        case 8:
            printf("Bye,bye....");
            exit(0);
        default :
            printf("Wrong Choice..., Please Enter Correct Choice!");
            break;
        }
    }
}
 
// Φτιάξε κενό stack
void create()
{
    top = NULL;
}
 
// Μέτρα στοιχεία
void stack_count()
{
    printf("\nNo. of elements in stack : %d", count);
}
 
//Pushare στοιχεία στο strack
void push(int data)
{
    if (top == NULL) ////first node initialize
    {
        top =(struct structure *)malloc(1*sizeof(struct structure));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct structure *)malloc(1*sizeof(struct structure));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
//Δείξε στοιχεία
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }
 
//Βγάλε στοιχείο
void pop()
{
    top1 = top;
 
    if (top1 == NULL) //stack is empty
    {
        printf("\nError : Trying to pop from empty stack");
        return;
    }
    else //// stack has one or more nodes
        top1 = top1->ptr;
    printf("\nPopped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}
 
//Επέστρεψε το πάνω στοιχείο
int topelement()
{
    return(top->info);
}
 
//Τσέκαρε αν το stack είναι κενό
void empty()
{
    if (top == NULL)
        printf("\nStack is empty");
    else
        printf("\nStack is not empty with %d elements", count);
}
 
//Κατέστρεψε όλο το stack
void destroy()
{
    top1 = top;
 
    while (top1 != NULL) ///*stack has one or more nodes*/
    {
        top1 = top->ptr; //// it is the same as top1->ptr
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
 
    printf("\nAll stack elements destroyed!");
    count = 0;
}