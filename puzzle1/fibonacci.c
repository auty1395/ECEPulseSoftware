#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long prev = 0, curr = 1, temp, count = 0;

    while (curr < 4990909023387507173)
    {
        temp = prev;
        prev = curr;
        curr = temp + curr;
    }

    printf("%lu\n", prev);
}
