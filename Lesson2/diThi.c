#include <stdio.h>

void main()
{
    // // Khai báo biến số buổi vắng và điểm trung bình
    // int soBuoiVang = 0;
    // float diemTB = 0.00;

    // // Nhập số buổi vắng và điểm trung bình
    // printf("Nhập số buổi vắng: ");
    // scanf("%d", &soBuoiVang);
    // printf("Nhập điểm trung bình: ");
    // scanf("%f", &diemTB);

    // // Xét điều kiện số buổi vắng ít hơn 4 VÀ điểm trung bình đạt ít nhất 5 điểm được dự thi, ngược lại
    // if (soBuoiVang < 4 && diemTB >= 5.00)
    // {
    //     printf("Sinh viên đủ điều kiện dự thi");
    // }
    // else
    // {
    //     printf("Sinh viên phải đăng ký học lại");
    // }

    // Khai báo số nguyên a
    int a = 0;

    // Nhập số nguyên a
    printf("Nhập số nguyên a: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("a = 0 là số không", a);
    }
    else
    {
        if (a % 2 == 0)
        {
            printf("a = %d là số chẵn", a);
        }
        else
        {
            printf("a = %d là số lẻ", a);
        }
    }
}