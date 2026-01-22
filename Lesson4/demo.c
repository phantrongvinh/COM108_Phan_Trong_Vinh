#include <stdio.h>

void main()
{
    // int i = 1;

    // while (i < 20)
    // {
    //     printf("hello %d\n", ++i);
    // }

    // int i = 3;
    // int tong = 0;
    // while (i <= 6)
    // {
    //     tong += i;
    //     printf("Tong la %d khi i = %d\n", tong, i);
    //     i++;
    // }
    // printf("Tong cuoi cung: %d\n", tong);

    // int i = 1;
    // while (i <= 6)
    // {
    //     printf("Thu %d\n", ++i);
    // }

    // int i = 1;
    // while (i <= 6)
    // {
    //     i++;
    //     if (i % 2 == 0)
    //     {
    //         printf("Thu %d ngay nghi\n", i);
    //     }
    //     else
    //     {
    //         printf("Thu %d ngay di hoc\n", i);
    //     }
    // }

    int min, max, a, i = 0;
    float tong, trungBinh;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    a = min;
    while (a <= max)
    {
        if (a % 2 == 0)
        {
            tong += a;
            a++;
            i++;
        }
        else
        {
            a++;
        }
    }
    if (i == 0)
    {
        printf("Bien dem i = 0 khong the tinh trung binh");
    }
    else
    {
        trungBinh = tong / i;
    }
    printf("Trung binh cac so chia het cho 2: %.2f", trungBinh);
}