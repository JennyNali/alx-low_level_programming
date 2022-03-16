#include "main.h"

/**
 * main - Entry point
 *
 * putchar - to print "main"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char main[4] = "main";
int i;
for (i = 0; i < 4; i++)
{
_putchar(main[i]);
}
_putchar('\n');
return (0);
}
