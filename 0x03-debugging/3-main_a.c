#include <stdio.h>

int main(void)
{
    int day = 4;
    int month = 1;
    int year = 1997;
    int dayOfYear = 91;
    int remainingDays = 274;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    printf("Day of the year: %d\n", dayOfYear);
    printf("Remaining days: %d\n", remainingDays);

    return 0;
}
