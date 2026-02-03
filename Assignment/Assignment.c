#include <stdio.h>
#include <stdbool.h>

void main()
{

    int choice = 0;
    int isTrue = 1;

    while (isTrue)
    {
        printf("******************************************************************\n"
               "Chương trình chức năng: \n"
               "1. Chức năng số 1: Kiểm tra số nguyên\n"
               "2. Chức năng số 2: Tìm ước chung và bội số chung của 2 số\n"
               "3. Chức năng số 3: Chương trình tính tiền cho quán karaoke\n"
               "4. Chức năng số 4: Tính tiền điện\n"
               "5. Chức năng số 5: Chức năng đổi tiền\n"
               "6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp\n"
               "7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe\n"
               "8. Chức năng số 8: Sắp xếp thông tin sinh viên\n"
               "9. Chức năng số 9: Xây dựng game FPOLY.LOTT (2/15)\n"
               "10. Chức năng số 10: Xây dựng chương trình tính toán phân só\n"
               "0. Thoát chương trình"
               "******************************************************************\n");
        printf("Nhập số tương ứng với chức năng muốn chọn: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Chức năng số 1: Kiểm tra số nguyên\n");
            break;
        case 2:
            printf("Chức năng số 2: Tìm ước chung và bội số chung của 2 số\n");
            break;
        case 3:
            printf("Chức năng số 3: Chương trình tính tiền cho quán karaoke\n");
            break;
        case 4:
            printf("Chức năng số 4: Tính tiền điện\n");
            break;
        case 5:
            printf("Chức năng số 5: Chức năng đổi tiền\n");
            break;
        case 6:
            printf("Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp\n");
            break;
        case 7:
            printf("Chức năng số 7: Xây dựng chương trình vay tiền mua xe\n");
            break;
        case 8:
            printf("Chức năng số 8: Sắp xếp thông tin sinh viên\n");
            break;
        case 9:
            printf("Chức năng số 9: Xây dựng game FPOLY.LOTT (2/15)\n");
            break;
        case 10:
            printf("Chức năng số 10: Xây dựng chương trình tính toán phân só\n");
            break;
        case 0:
            isTrue = 0;
            break;
        default:
            break;
        }
    }
}