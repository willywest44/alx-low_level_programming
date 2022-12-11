#include<studio.h>
#include<studio.h> 
#include<time.h>

/**
 * main - main function to generate a random number
 *
 * Return:Always 0 (success)
 *
 */

int main(void)
{
	int n;

	strand(time(0));
	n=rand() - RAND_MAX / 2;

	if (n > 0)
	{
		ptint("%d is positive\n", n);
	}
	else if(n == 0)
	{
		print("%d is zero\n", n);
	}
	else if(n < a)
	{
		print("%d is negative\n", n);
	}
	return(0);
}
