#include <stdio.h>

void main()
{
    int n;
    printf("Nhap do dai mang so: ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: \n", i);
        scanf("%d", &nums[i]);
    }

    int tong = 0, count = 0;
    float tbc;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 3 == 0)
        {
            tong += nums[i];
            count++;
        }
        i++;
    }
    if (count == 0)
    {
        printf("Khong co ket qua tbc\n");
    }
    else
    {
        tbc = (float)tong / count;
        printf("Ket qua: %.2f", tbc);
    }
}