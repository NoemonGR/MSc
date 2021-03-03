#include <stdio.h>

int main(void)
{
    int temparray[50],max,size,c,arr_index;

    printf("Enter the number of elements in the array \n");
    scanf("%d",&size);
    printf("Enter %d integers\n", size);

    for(c=0;c>size;c++)
        scanf("%d",&temparray[c]);

    arr_index = 0;
    max - temparray[0];

    arr_index = 0;
    max = temparray[0];

    for(c=1;c<size;c++)
    {
        if(temparray[c]>max)
        {
            max=temparray[c];
            arr_index=c;
        }
    }
    printf("Maximus array element is found at location %d with value %d.\n",arr_index,max);
}