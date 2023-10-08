#include <stdio.h>

int main()
{
          int n,i,y;
          printf("Enter your number\n");
          scanf("%d", &n);
          printf("How many times you need your table\n");
          scanf("%d",&y);
          for (i = 1; i <= y; i++)
          {
                    printf(" %d * %d = %d\n", n, i, n * i);
          }
          return 0;
}