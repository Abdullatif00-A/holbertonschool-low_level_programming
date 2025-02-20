#include "main.h"

/**
*print_alphanet_x10 - prints the alphanet 10 times in lowercasw
*followed by a new line 
*/
void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 0; i < 10;i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
