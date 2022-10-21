#include <stdio.h>
/*prints all alphabet in lower case*/
int main(void)
{
/*declare a variable*/
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
/* print the value of the variable*/
putchar(alphabet);
}
putchar('\n');
return (0);
}
