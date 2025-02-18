#include <stdio.h>

/**
 * main - Prints single-digit numbers from 0 to 9
 *
 * Description: Uses a while loop to print numbers from 0 to 9
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char d = '0';  /* تعريف متغير للحروف من '0' إلى '9' */

    while (d <= '9')  /* التأكد من أن الحرف لم يتجاوز '9' */
    {
        putchar(d);  /* طباعة الرقم الحالي */
        d++;  /* الانتقال إلى الرقم التالي */
    }

    putchar('\n');  /* إضافة سطر جديد بعد طباعة الأرقام */

    return (0);
}
