#include <unistd.h>
/**
 * _putchar -writr the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 * on error, -1 is returned, and errno is apporpriate
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
