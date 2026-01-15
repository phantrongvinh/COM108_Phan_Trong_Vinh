#include <stdio.h>

// Tính chu vi và diện tích hình chữ nhật
void main()
{

    // Khai báo dài, rộng, chu vi và diện tích
    int length, width, perimeter, area = 0;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &length);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &width);

    // Tính chu vi và diện tích
    // Chu vi = (dai + rong) * 2
    perimeter = (length + width) * 2;
    // Dien tich = dai * rong
    area = length * width;

    // In ra kết quả
    // Chu vi
    printf("Chu vi hinh chu nhat la: %d\n", perimeter);
    // Dien tich
    printf("Dien tich hinh chu nhat la: %d\n", area);
}