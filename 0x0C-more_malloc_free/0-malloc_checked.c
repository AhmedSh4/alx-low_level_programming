#include <stdlib.h>
#include "main.h"



/**
*malloc_checked - allocates using malloc
* @b: number of bytes
*
* Return: a pointer to memory
*/

void *malloc_checked(unsigned int b)

{

void *ptr;



ptr = malloc(b);



if (ptr == NULL)

exit(98);



return (ptr);

}
