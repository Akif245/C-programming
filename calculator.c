#include <stdio.h>

int main()
{
          int a, b, choice;
          printf("inter your choice \n");
          printf(" 1.addition\n 2.subtraction\n 3.multification\n 4.division");
          scanf("%d", &choice);

          if (choice > 4)
          {
                    printf("intered a wrong choice");
          }
          else
          {
                    printf("inter your 2 numbers \n");
                    scanf("%d  %d", &a , &b);
          }

          switch (choice)
          {
          case 1:
          {
                    printf("%d + %d = %d\n", a, b, (a + b));
                    break;
          }

          case 2:
          {
                    printf("%d - %d  = %d\n", a, b, (a - b));
                    break;
          }

          case 3:
          {
                    printf("%d * %d  = %d\n", a, b, (a * b));
                    break;
          }

          case 4:
          {
                    if (b != 0)
                    {
                              printf("%d / %d  = %d\n", a, b, (a / b));
                    }
                    else
                    {
                              printf("number cannot be divisible by 0\n");
                    }

                    break;
          }

          default:
                    ("user intered wrong number ");
                    break;
          }

          return 0;
}
