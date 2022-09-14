#include "main.h"

/**
 * _islower - checks for lower case
 *
 * @c: this is the charactor we are checking
 *
 * Return: 0 or 1
 */

int _islower(int c)
/**
 *  _idlower -  function to check if character is lowercase and return 1
 */

{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
