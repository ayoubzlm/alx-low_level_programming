#include "main.h"
/**
 * _strlen - return the lenght of a string
 * owned by ayoub belmayzi
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 success
 */
int  _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
