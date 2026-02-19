#include <stdio.h>

int main() {
    int horas, minutos, total_minutos;

    printf("Digite a hora (entre 0-23): ");
    scanf("%d", &horas);

    printf("Digite os minutos (entre 0-59): ");
    scanf("%d", &minutos);

    total_minutos = horas * 60 + minutos;
    printf("Passou %d minutos.\n", total_minutos);
    
    return 0;
}
