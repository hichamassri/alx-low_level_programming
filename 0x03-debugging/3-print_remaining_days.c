#include <stdio.h>
#include "main.h"

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

/**
 * print_remaining_days - prints the remaining days in a year
 * @month: the month (1-12)
 * @day: the day (1-31)
 * @year: the year
 */
void print_remaining_days(int month, int day, int year)
{
    int dayOfYear = convert_day(month, day);
    int remainingDays;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month > 2)
        {
            dayOfYear++;
        }
        remainingDays = 366 - dayOfYear;
        printf("Day of the year: %d\n", dayOfYear);
        printf("Remaining days: %d\n", remainingDays);
    }
    else
    {
        remainingDays = 365 - dayOfYear;
        printf("Day of the year: %d\n", dayOfYear);
        printf("Remaining days: %d\n", remainingDays);
    }
}
