#include <stdio.h>

int main()
{
    int i, a, b, c;

    for (i = 1; i <= 500; i++)
    {
        a = i / 100;       // hundreds digit
        b = (i / 10) % 10; // tens digit
        c = i % 10;        // ones digit

        if ((a * a * a) + (b * b * b) + (c * c * c) == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}