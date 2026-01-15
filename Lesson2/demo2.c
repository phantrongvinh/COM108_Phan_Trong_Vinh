#include <stdio.h>

void main()
{
    int soChia, soBiChia;
    float kq = 0.00;
    printf("Nhap soChia: ");
    scanf("%d", &soChia);
    printf("Nhap soBiChia: ");
    scanf("%d", &soBiChia);
    if (soChia == 0)
    {
        printf("Ve hoc lai toan di nhe!");
    }
    else
    {
        kq = (float)soBiChia / soChia;
        printf("Ket qua: %.2f", kq);
    };
}