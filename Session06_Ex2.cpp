#include <stdio.h>

int main() {
    int numbers[5], sochan = 0, sole = 0;

    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0)
            sochan++;
        else
            sole++;
    }
    printf("So luong so chan: %d\n", sochan);
    printf("So luong so le: %d\n", sole);

    return 0;
}
