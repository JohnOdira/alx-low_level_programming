#include "main.h"
/**
* get_endianness - prog checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int apple;
char *ben;
apple = 1;
ben = (char *)&apple;
return (*ben);
}
