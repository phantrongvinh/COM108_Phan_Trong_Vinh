#include <stdio.h>

int tinhTong(int a, int b)
{
    return a + b;
}

float tinhHieu(float a, float b)
{
    return a - b;
}

float tinhTich(float a, float b)
{
    return a * b;
}

float tinhThuong(float a, float b)
{
    return a / b;
}

void main()
{
    int a = 15;
    int b = 20;
    int rs = tinhTong(a, b);
    printf("Tong 2 so %d va %d la: %d\n", a, b, rs);

    float result = tinhHieu(a, b);
    printf("Hieu 2 so %.2f va %.2f la: %.2f\n", a, b, result);

    result = tinhTich(a, b);
    printf("Tich 2 so %.2f va %.2f la: %.2f\n", a, b, result);

    if (b == 0)
    {
        printf("Khong the chia cho 0\n");
    }
    else
    {
        result = tinhThuong(a, b);
        printf("Thuong 2 so %.2f va %.2f la: %.2f\n", a, b, result);
    }
}