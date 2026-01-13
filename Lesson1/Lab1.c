// Standard input-output header file
#include <stdio.h>

// Hàm main
int main()
{
    // Khai báo biến
    int a;
    int b;

    // Khai báo biến cùng lúc nếu cùng kiểu dữ liệu
    // int x, y, z;

    // Gán giá trị cho biến
    a = 5;
    b = 10;

    // Quy ước khai báo biến Camel Case
    int variable_a = 15;
    int variable_b = 19;

    // Khai báo biến tính tổng giá trị
    int sum = a + b;

    // Khai báo biến và tính hiệu giá trị
    int diff = a - b;

    // In ra màn hình terminal
    printf("Hello, World!\n");
    printf("Tổng là: %d\n", sum);
    printf("Hiệu là: %d\n", diff);

    // Trả về 0 báo hiệu chương trình kết thúc thành công
    return 0;
}