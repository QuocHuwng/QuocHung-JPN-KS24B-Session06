#include <stdio.h>

int main() {
    char matkhau[20];
    printf("Nhap mat khau: ");
    scanf("%s", matkhau);
    if (matkhau[0] == '1') {
    	printf("Mat khau dung\n"); 
	} else {
		printf("Mat khau sai\n");
	} 
    return 0;
}
