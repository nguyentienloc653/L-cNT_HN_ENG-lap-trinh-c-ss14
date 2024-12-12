#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho chu?i
    char c[100];
    printf("Moi ban nhap vao chuoi bat ky :");
    scanf("%s",&c);
    // In ra t?ng ký t? cách nhau 1 d?u cách
    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
        if (c[i + 1] != '\0') { // Ki?m tra n?u chua ph?i ký t? cu?i cùng
            printf(" ");
        }
    }
    
    printf("\n"); // Xu?ng dòng sau khi k?t thúc
    return 0;
}

