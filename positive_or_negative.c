#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
                printf("is positive\n");
        else if (i == 0)
                printf("is zero\n");
        else
                printf("is negative\n");
}
