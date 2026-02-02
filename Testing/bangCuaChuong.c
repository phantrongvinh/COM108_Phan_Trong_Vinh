#include <stdio.h>

void main()
{
    int x = 1;
    int rs = 0;
    printf("Bang cuu chuong: \n");

    while (x < 10)
    {
        printf("Bang cua chuong %d: \n", x);
        for (int i = 1; i < 10; i++)
        {
            rs = x * i;
            printf("%d x %d = %d\n", x, i, rs);
        }
        printf("\n");
        x++;
    }
}