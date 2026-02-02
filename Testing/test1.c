#include <stdio.h>

void main()
{

    // khai bao chieu dai, chieu rong
    int width, length;

    printf("Nhap 0 de thoat.\n");
    // Nhap chieu dai
    printf("Nhap vao chieu dai: ");
    scanf("%d", &length);

    // Nhap chieu rong
    printf("Nhap vao chieu rong: ");
    scanf("%d", &width);

    if (width != 0 && length != 0)
    {
        // Hinh chu nhat dac
        printf("Hinh chu nhat\n");
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < width; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        // Hinh chu nhat rong
        printf("Hinh chu nhat rong\n");
        for (int i = 0; i < length; i++)
        {

            for (int j = 0; j < width; j++)
            {
                if ((i > 0 && i < length - 1) && (j > 0 && j < width - 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }

        // Tam giac vuong
        printf("Tam giac vuong\n");
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (j <= i)
                {
                    printf("*");
                }
            }
            printf("\n");
        }

        // Tam giac can
        printf("Tam giac can\n");
        for (int i = 1; i < length; i++)
        {
            for (int j = 0; j < length - i; j++)
            {
                printf(" ");
            }
            for (int l = 0; l < i * 2 - 1; l++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Cac canh khong the = 0");
    }
}