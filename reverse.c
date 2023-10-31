#include<stdio.h>
int main()
{
    int  x[10],size,i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&x[i]);
     }
     printf("The reversed array is");
    for (int i = size ; i>=0; i--)
    {
        printf("%d\n",x[i]);
        
    }
    
    }   
