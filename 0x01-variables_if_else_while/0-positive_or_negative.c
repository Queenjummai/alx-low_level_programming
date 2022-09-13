#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always Success
*/
int main(void)
{

int n;

strand(time(0));
n =rand() - RAND_MAX / 2;

if (n > 0)
	Printf("%d is positive\n", n);
else if (n == 0)
	Printf("%d is zero\n",n);
else
	Printf("%d is negative\n",n);
return (0);
}
