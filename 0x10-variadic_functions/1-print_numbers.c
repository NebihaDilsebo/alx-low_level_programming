#include "variadic_functions.h"

/**
 * print_numbers - function that prints number followed by a new line
 * @separator: the string to be printed between numbers
 * @n: n: the number of intigers passed to the function
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
	printf("%d", va_arg(nums, int));

	if (index != (n - 1) && separator != NULL)
		printf("%s",  separator);

}

printf("\n");

va_end(nums);
}
