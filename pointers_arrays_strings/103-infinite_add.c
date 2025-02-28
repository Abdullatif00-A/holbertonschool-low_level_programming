#include "main.h"
#include <stdio.h>

int main(void)
{
    char *n = "123456789";
    char *m = "987654321";
    char r[100];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n, m, res);

    return (0);
}
