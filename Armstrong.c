#include<stdio.h>

int main (){
          int n,arm=0,r,c;
          printf("Enter your number :\n");
          scanf("%d",&n);
          c=n;
          while (n>0)
          {
                    r=n%10;
                    arm=(r*r*r) + arm;
                    n=n/10;
         }
         if (c==arm)
         {
          printf("The given number is Armstrong number");
         }
         else
         {
          printf("The given number is Not a Armstrong number");
         }
return 0;
}