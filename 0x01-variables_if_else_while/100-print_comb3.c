#include <stdio.h>

/**
 * main - prints all possible combinations of three digits numbers
 *
 * Return: Always 0
 */
 int main(void)
 {
    int i;
    int j;

    for( i = 48; i <= 57; i++)
    {
        for(j = i + 1; j <= 57; j++)
        {
            putchar(i);
            putchar(j);
            if(i != 56 || j != 57)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    printf("\n");
    return (0);
}
