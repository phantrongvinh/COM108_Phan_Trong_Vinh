#include <stdio.h>
#include <math.h>

void main()
{
    float num;
    printf("Nhap mot so: ");
    scanf("%f", &num);

    // Kiem tra so nguyen
    if (floor(num) != num)
    {
        printf("%.2f khong la so nguyen\n", num);
    }
    else
    {
        printf("%.2f la so nguyen \n", num);
        int n = (int)num;
        if (n < 0)
        {
            printf("%d la so nguyen am\n", n);
        }
        else if (n > 0)
        {
            printf("%d la so nguyen duong\n", n);

            // Kiem tra so nguyen to
            if (n > 1)
            {
                int i = 2;
                int isSNT = 1;
                while (i < (n / 2) && isSNT == 1)
                {
                    if (n % i == 0)
                    {
                        isSNT = 0;
                        printf("%d khong la so nguyen to\n", n);
                    }
                    else
                    {
                        i++;
                    }
                }
                if (isSNT == 1)
                {
                    printf("%d la so nguyen to\n", n);
                }
            }

            // Kiem tra so chinh phuong
            int j = 1;
            int isSCP = 0;
            while (j <= sqrt(n) && isSCP == 0)
            {
                if (j * j == n)
                {
                    isSCP = 1;
                    printf("%d la so chinh phuong\n", n);
                }
                else
                {
                    j++;
                }
            }
            if (isSCP == 0)
            {
                printf("%d khong la so chinh phuong\n", n);
            }
        }
        else
        {
            printf("%d la so 0\n", n);
            printf("%d la so chinh phuong\n", n);
        }
    }
}