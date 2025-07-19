#include <stdio.h>
int main(){
    int n;

    printf("Informe a altura da pirãmide: ");
    scanf("%d", &n);
    
    if(n < 2){
        printf("A altura deve ser maior do que 1.\n");
        return 1;
    } else {
        for (int i = 1; i <= n; i++){
            for (int j = 0; j < n - 1; j++){
                printf(" ");
            }

            for (int s = 1; s <= i; s++){
                printf("%d", s);
            }

            for (int s = i - 1; s >= 1; s--){
                printf("%d", s);
            }
            printf("\n");
        }
    }

    return 0;
}