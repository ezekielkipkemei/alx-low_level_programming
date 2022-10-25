#include "stdio.h"
#include "string.h"
#include "stdlib.h"
/**
*_strlen -> function to get the length of a string
*@s: string pointer to passed to this function
*Return: returns length of the string
*/
int main(void)
{
    char *x = "Hello world";
    char *s = &x;
int len;
for (; *s != '\0'; s++)
{
    len += 1;
    s++;
}
printf("%d\n", strlen(x));
return 0;
}
