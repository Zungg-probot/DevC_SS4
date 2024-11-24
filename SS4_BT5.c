#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num2 && num3 < num1) || (num3 > num1 && num3 < num2)) {
        printf("So thu ba %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba %d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
    }

    return 0;
}
