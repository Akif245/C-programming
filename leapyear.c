#include<stdio.h>
int main(){
	int year;
printf("Inter a year:");
scanf("%d",&year);
if(year % 400 == 0)
printf("%d is a leap year", year);
else if(year % 100 == 0)
printf("%d It is not a leap year", year);
else
       	printf("%d It is not a leap year",year);

}
