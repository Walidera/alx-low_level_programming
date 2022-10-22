#include <stdio.h>
<<<<<<< HEAD
#include <unistd.h>

/**
 * main - prints string in put function
 * Description: print size of various types on this computer
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
=======
/**
 * main -is the entry point for the program.
 *  
 * Return:zero if no error, Non-zero value if errors.
 *     
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
        printf("Size of a float: %ld byte(s)\n", sizeof(float));
>>>>>>> 250cefd32798366f7138df31510f37af3049f5ed
	return (0);
}
