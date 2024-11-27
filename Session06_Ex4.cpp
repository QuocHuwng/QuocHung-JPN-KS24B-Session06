#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;

    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("Nghiem kep: x = %.2f\n", x1);
    } else {
        printf("Hai nghiem phuc.\n");
    }

    return 0;
}
