#include <stdio.h>
int getfirstdayoftheyear(int year)
{
    int day = (year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return day;
}
int main(int argc, char const *argv[])
{
    char *months[]={"January","February","March","April","May","June","Jully","August","September","October","November","December"};
    int daysinmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,totaldays,weekday=0,spacecounter=0,year;
    printf("Enter any year: ");
    scanf("%d",&year);
    printf("\n\n\n-----------Wellcome to %d year-----------\n\n",year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
      daysinmonths[1]=29;
    }
    weekday= getfirstdayoftheyear(year);
    for(i=0;i<12;i++)
    {
        printf("\n\n--------------------%s---------------------\n",months[i]);
        printf("\n  sun  mon  tues  wed  thus  fri  sat\n\n");

        for ( spacecounter = 1; spacecounter <= weekday; spacecounter++)
        {
            printf("     ");
        }

        totaldays=daysinmonths[i];
        for ( j = 1; j <= totaldays; j++)
        {
            printf("%5d",j);
            weekday++;
            if (weekday > 6)
            {
                weekday=0;
                printf("\n");
            }

        }

    }
    return 0;
}
