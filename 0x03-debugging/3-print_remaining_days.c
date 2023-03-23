#include <stdio.h>
#include "main.h"
/**
* This function, print_remaining_days, 
* calculates and prints the number of days
* remaining in a given year, taking into account leap years.
* @month: the month in numerical format
* @day: the day of the month
* @year: the year
* This function does not return a value, instead, it prints the result directly.
*/
void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
