#include "main.h"
/**
 * main: funcition to convert binary numbers
 * @b:handle Null input
 * return: always 0 success
*/
unsigned int binary_to_uint(const char *b);
{
    unsigned int result = 0;
    int num;

    if (b = NULL)
    {
        return(0);
    }
    for (result = 0; b[result] !='\0';result ++)
    {
        if (b[result] != '0' && b[result] != '1')
      return (0);
    }
    for (a = 0; b[result] != '\0'; a++)
  {
    num <<= 1;
    if (b[result] == '1')
      num += 1;
  }
  return (num);
}