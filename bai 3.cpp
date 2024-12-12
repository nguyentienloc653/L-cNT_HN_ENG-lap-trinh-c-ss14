#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]="chuaduocdaonguoc";
    int n;
    n = strlen(chuoi) - 1;

    printf("Chuoi dao nguoc: ");
    for (int i = n; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
}
