#include <stdio.h>
int main(){
    int h;

    printf("Informe a altura do triângulo: ");
    scanf("%d", &h);

    for (int i = 0; i < h; i++) { 
        for (int s = 0; s < h - i - 1; s++) {
            printf(" ");
        }
        
        int valor = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}