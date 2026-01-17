#include <stdio.h>

void main()
{
    // Khai báo biến diem
    float diem = 0.00;

    // Nhập diem
    printf("Nhập điểm: ");
    scanf("%f", &diem);

    // Xét điều kiện học sinh
    if (diem <= 0)
    {
        printf("Diem khong hop le");
    }
    else if (diem >= 9 && diem <= 10)
    {
        printf("Hoc sinh xuat sac");
    }
    else if (diem >= 8 && diem < 9)
    {
        printf("Hoc sinh gioi");
    }
    else if (diem >= 6.5 && diem < 8)
    {
        printf("Hoc sinh kha");
    }
    else if (diem >= 5 && diem < 6.5)
    {
        printf("Hoc sinh trung binh");
    }
    else if (diem >= 3.5 && diem < 5)
    {
        printf("Hoc sinh yeu");
    }
    else
    {
        printf("Hoc sinh kem");
    }
}