#include <stdio.h>
enum weekdays
{
    MONDAY=1
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main()
{
    int n;
    enum weekdays choice;
    scanf("%d",n);
    choice=(enum weekdays)n;
    if(choice<1||choice>7)
    printf("Invalid input");
return o
switch (choice)
case MONDAY:
printf("MONDAY");
break;
case TUESDAY:
printf("TUESDAY");
break;
case WEDNESDAY:
printf("WEDNESDAY");
break;
case THURSDAY:
printf("THURSDAY");
break;
case FRIDAY:
printf("FRIDAY");
case SATURDAY:
printf("SATURDAY");
break;
case SUNDAY
printf("SUNDAY");
break;
return 0;
}
