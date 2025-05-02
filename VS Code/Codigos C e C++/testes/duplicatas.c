#include <stdio.h>

int main() {
    int original[] = {1, 2, 2, 3, 4, 4, 5};
    int tamanho = sizeof(original) / sizeof(original[0]);

    int semDuplicatas[tamanho];
    int novoTamanho = 0;

    for (int i = 0; i < tamanho; i++) {
        int duplicado = 0;

        for (int j = 0; j < novoTamanho; j++) {
            if (original[i] == semDuplicatas[j]) {
                duplicado = 1;
                break;
            }
        }

        if (!duplicado) {
            semDuplicatas[novoTamanho] = original[i];
            novoTamanho++;
        }
    }

    printf("Vetor sem duplicatas: ");
    for (int i = 0; i < novoTamanho; i++) {
        printf("%d ", semDuplicatas[i]);
    }

    return 0;
}
