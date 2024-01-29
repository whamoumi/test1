#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;

    if (a == 1)
    {
        if (b == 2)
        {
            if (c == 3)
            {
                if (d == 4)
                {
                    if (e == 5)
                    {
                        printf("a = 1, b = 2, c = 3, d = 4, e = 5\n");
                    }
                }
            }
        }
    }

    return 0;
}