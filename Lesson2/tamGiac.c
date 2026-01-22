#include <stdio.h>

void main()
{
    // Khai báo ba biến cạnh, a, b, c
    unsigned int a, b, c = 0;

    // Nhập giá trị 3 cạnh
    printf("Nhap canh a: ");
    scanf("%d", &a);

    printf("Nhap canh b: ");
    scanf("%d", &b);

    printf("Nhap canh c: ");
    scanf("%d", &c);

    // Xét điều kiện để hình thành tam giác
    if (a != 0 && b != 0 && c != 0)
    {
        if (a + b > c || a + c > b || b + c > a)
        {
            printf("Co the tao thanh 1 tam giac");
        }
        else
        {
            printf("Khong the tao thanh 1 tam giac");
        }
    }
    else
    {
        printf("Khong the tao thanh 1 tam giac");
    }
}