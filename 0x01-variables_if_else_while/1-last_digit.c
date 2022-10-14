<<<<<<< HEAD
akhsd
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -print if the number is positive, zero or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	/* your code goes there*/
	if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, 1);
}
else
{
	printf("Last digit of %d and is less than 6 and not 0\n", n, l);
}
	return (0);
}
>>>>>>> 95f271885381cdd4af1f1f8c1f76e5507ece365c
