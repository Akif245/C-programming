#include<stdio.h>
int main()
{          int a ,b ,c ;
          printf("inter your 3 numbers\n");        
          scanf("%d %d %d" ,&a,&b,&c);
          if (a>b)
          {
                (a>c);
                    printf("%d is the largest\n",a);
          }          
          else if (b>c)
          {
                 printf(" %d is the largest\n", b);
          }
          else
          {
                    printf("%d is the largest\n",c);
          }
           if (a=b=c)
          {
                 printf("you have intered same numbers\n");
          }
                    return 0;
}
