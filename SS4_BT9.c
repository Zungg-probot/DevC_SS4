#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Khong hop le.\n");
        return 0;
    }
    if (month == 2) {
        if (day < 1 || day > 28) {
            printf("Khong hop le.\n");
            return 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            printf("Khong hop le.\n");
            return 0;
        }
    } else {
        if (day < 1 || day > 31) {
            printf("Khong hop le.\n");
            return 0;
        }
    }
    printf("Ngay %d-%d-%d la hop le.\n", day, month, year);

    return 0;
}
