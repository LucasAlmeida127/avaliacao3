#include "MinhaBiblioteca.h"

int main(void) {
    int quantidade, vetor[30];
    int *pvetor = &vetor;

    printf("\n----------------\n");
    printf("Quantidade de valores: ");
    scanf("%i", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        printf("Valor %i: ", i+1);
        scanf("%i", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];
    Funcao(pvetor, quantidade, &maior, &menor); // Função que retorna o valor máximo e mínimo de um vetor de inteiros

    printf("\n%i",vetor[0]);
    for (int i = 0; i < quantidade; i++) {
        printf(",%i",vetor[i]);
    }
    printf("\nMaximo: %i | Minimo: %i", maior, menor);
    printf("\n----------------\n");
    return 0;
}