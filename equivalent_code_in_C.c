#include <stdio.h>

int main()
{
    int a, b, d, sum, rez = 1;

    printf("\nGive the first input: ");
    scanf("%d", &a);

    printf("\nGive the second input: ");
    scanf("%d", &b);

    int first = a, second = b;

    while(b != 0)
    {
        d = a;
        sum = 0;
        while(d != 0)
        {
            sum = sum + rez;
            d--;
        }
        rez = sum;
        b--;
    }

    printf("\n\n%d ^ %d = %d", first, second, rez);

    return 0;

    /*
        In the assembly code:
        a = 99(memory address)
        b = 98(memory address)
        d = 97(memory address)
        sum = 96(memory address)
        rez = 95(memory address)
    */
}