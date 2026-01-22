#include <stdio.h>

void main()
{

    unsigned int year, month;

    printf("Nhap nam: ");
    scanf("%d", &year);

    month = 1;

    while (month <= 12)
    {
        if (month == 2)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                printf("Thang 2 co 29 ngay\n");
                month++;
            }
            else
            {
                printf("Thang 2 co 28 ngay\n");
                month++;
            }
        }
        else if (month <= 7)
        {
            if (month % 2 == 0)
            {
                printf("Thang %d co 30 ngay\n", month);
                month++;
            }
            else
            {
                printf("Thang %d co 31 ngay\n", month);
                month++;
            }
        }
        else
        {
            if (month % 2 == 0)
            {
                printf("Thang %d co 31 ngay\n", month);
                month++;
            }
            else
            {
                printf("Thang %d co 30 ngay\n", month);
                month++;
            }
        }
    }
}