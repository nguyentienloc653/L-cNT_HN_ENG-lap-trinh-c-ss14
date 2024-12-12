#include <stdio.h>
#include <string.h>
int main() {
    char answer;
    int count;
    char c[100];
    printf("Nhap vao chuoi ky tu: ");
    fgets(c, sizeof(c), stdin);
    for (int i = 0;i<strlen(c);i++){
        if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')){
            count++;
        }
    }
    printf("So chu cai trong chuoi la: %d",count);
}
