#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho chu?i
    char c[100];
    printf("Moi ban nhap vao chuoi bat ky :");
    scanf("%s",&c);
    // In ra t?ng k� t? c�ch nhau 1 d?u c�ch
    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
        if (c[i + 1] != '\0') { // Ki?m tra n?u chua ph?i k� t? cu?i c�ng
            printf(" ");
        }
    }
    
    printf("\n"); // Xu?ng d�ng sau khi k?t th�c
    return 0;
}

