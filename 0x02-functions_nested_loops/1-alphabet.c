#include "main.h"

/**
* print_alphabet -Entry point
* description: a function that prints the alphabet, in lower case followed by a new line
* Return: void
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	_putchar('\n');
}	
