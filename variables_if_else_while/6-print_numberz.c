#include <stdio.h>
/**
 * main - print decimal without char
 *
 * Return: (0)
 *
 */
 int main(void)
 {
         int d;
         
         for (d <= '0'; d <= '9'; d++)
        {
                 putchar(d);
                 d++;
         }
         putchar('\n')
         
         return (0);
