#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/**
 * main -Entry
 * Description: Prints indicator of positive or negative integers
 * Return: 0
 */

=======

/**
 * main - main function to generate a random number
 *
 * Return: always 0 (Success)
 *
 */
>>>>>>> 250cefd32798366f7138df31510f37af3049f5ed
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
=======

>>>>>>> 250cefd32798366f7138df31510f37af3049f5ed
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
<<<<<<< HEAD
	else
=======
	else if (n < 0)
>>>>>>> 250cefd32798366f7138df31510f37af3049f5ed
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
