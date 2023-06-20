#include <stdio.h>

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

int main(void)
{
    int month = 2;
    int day = 29;
    int year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    print_remaining_days(month, day, year);

    return 0;
}
