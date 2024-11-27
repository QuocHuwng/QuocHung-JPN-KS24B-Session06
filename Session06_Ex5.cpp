#include <stdio.h>

int main() {
    int year, month, days;

    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            printf("days = 29");
        } else {
            printf("days = 28");
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        printf("days = 31");
    }
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);   
    return 0;
}
