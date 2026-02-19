#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite a 1° nota: ");
    scanf("%f", &n1);

    printf("Digite a 2° nota: ");
    scanf("%f", &n2);

    printf("Digite a 3° nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Média final entre as três notas: %.2f\n", media);

    return 0;
}
