# include <stdio.h>

int main()
{ int a,b,c,f;
scanf("%d,%d,%d",&a,&b,&c);

           f = (b*b-4*a*c);
          if (f > 0)
          {
                    printf( " both roots are imagianary " ); 
            }
          if (f == 0)
          {
                   printf("both roots are equal");
          }
          if (f < 0)
          {
           printf("both roots are real and distinct");
          }
          

          return 0;
}
