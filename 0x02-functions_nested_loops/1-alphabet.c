#include <stdio.h>
#ifndef MAIN_H
/*prints all alphabet in lower case*/
int putchar(char c)
{
/*declare a variable*/
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
/* print the value of the variable*/
putchar(alphabet);
putchar('\n');
return (0);
}
