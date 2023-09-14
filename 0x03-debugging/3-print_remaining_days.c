#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and print how many days are
 * left in the year, considering leap years.
 * @month: month in number format
 * @day: day of month
 * @year:  year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int leap_year = 0;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leap_year = 1;

	if (leap_year && month > 2)
		days_in_month[2] = 29;

	int day_of_year = 0;
	for (int i = 1; i < month; i++)
		day_of_year += days_in_month[i];
		day_of_year += day;

	if (leap_year)
		printf("Day of the year: %d (Leap year)\n", day_of_year);
	else
		printf("Day of the year: %d\n", day_of_year);

	if (leap_year)
		printf("Remaining days: %d (Leap year)\n", 366 - day_of_year);
	else
		printf("Remaining days: %d\n", 365 - day_of_year);
}
