#include <stdio.h>

void tinhTong(int a, int b, int *tong)
{
    *tong = a + b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int a = 15, b = 10;
    swap(&a, &b);
    printf("a = %d; b = %d\n", a, b);
}