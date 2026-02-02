#include <stdio.h>

void main(){

    unsigned int num, count;
    int i = 2;
    printf("Nhap vao 1 so: ");
    scanf("%d", &num);


    if(num == 1){
        printf("%d khong la so nguyen to\n", num);
    }else{
        while(i < num){
            if(num % i ==0){
                count++;
            }
        }
    
        if(count == 0){
            printf("%d la so nguyen to\n", num);
        }else{
            printf("%d khong la so nguyen to\n", num);
        }
    }
}