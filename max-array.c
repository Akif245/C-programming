#include<stdio.h>
int main()
{
    int  a[20],size,i,max;
    printf("Enter the size of array\n");
    scanf("%d\n",&size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (int i = 0; i < size; i++)
    {
     if (a[i]>max)
     {
        max=a[i];
     }
     
    }
    printf("The max value is %d\n",max);

}
