#include <stdio.h>

int main() {
    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}