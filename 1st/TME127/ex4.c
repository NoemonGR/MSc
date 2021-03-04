#include <stdio.h>
#include <stdlib.h>
#define max_values 4 // Define a macro. We assume 6 max positions in the array.

// VARIABLES
int stack[max_values]; // Array implementation of stack
int top; // To insert and delete items

// FUNCTIONS
void push(); // Adds items in the stack
void pop(); // Removes items from the stack. If stack is empty => Underflow condition
void display(); // Show items based on LIFO

int main()
{
  int option; // variable so that user chooses among 3 option

  printf("\nThis programs will handle a LIFO data structure with Array.\n\n");
  top = -1; // top=-1 => is empty

  do
  {
  printf("Please choose one of the options:\n");
  printf("1. Push\n2. Pop\n3. Show\n4. Exit\n\n");
  printf("Enter your choice:");

  scanf("%d",&option);

  switch(option)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("Bye,bye...");
      exit(0);
      break;
    default:
      //return 0;
      printf("Option does not exist. Please choose an alternative option!\n");
    break;
    }
  } while(option!=4);
  return 0;
}

// Adds items in the stack
void push()
{
int item;
if(top == max_values- 1) //check if stack is full
{
printf("Stack overflow. Choose an alternative option.\n");
}
else
{
printf("Enter the the desire data:");
scanf("%d", &item);
top++;
stack[top]=item;
}
}


//Removes items from the stack.
void pop()
{
int element;
if(top == -1)
{
printf("Stack underflow. Please Push an item first.\n");
}
else
{
element=stack[top];
printf("The following item has been deleted %d\n",stack[top]);
top--; // The element below the topmost element is deleted
}
}

// display data
void display()
{
  int i;
if(top == -1)
{
printf("No data. Stack underflow\n"); // Stack is empty
}
else if(top > 0)
{
printf("The elements of the stack are:\n");
for(i = top; i >= 0; i--) // top to bottom traversal
{
printf("%d\n",stack[i]);
}
}
}
