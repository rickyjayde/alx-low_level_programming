#include "main.h"
include "stdio.h"

/**
 * mul - multiplies two integers
 * @a: int to be multiplied to b
 * @b: int to be multiplied to a
 *
 * Return: the result of the operation
 */
int main(void)
{
    int result1 = mul(628, 160);
    int result2 = mul(-257, 6392);

    printf("%d\n", result1);
    printf("%d\n", result2);

    return (0);
}
