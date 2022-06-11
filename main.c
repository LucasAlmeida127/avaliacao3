#include "MinhaBiblioteca.h"

int main(void) {
    int quantidade, vetor[30];
    int *pvetor = &vetor;

    scanf("%i", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%i", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];
    Funcao(pvetor, quantidade, &maior, &menor); // Função que retorna o valor máximo e mínimo de um vetor de inteiros

    printf("\n%i",vetor[0]);
    for (int i = 0; i < quantidade; i++){
        printf(",%i",vetor[i]);
    }
    printf("\nMaximo: %i | Minimo: %i", maior, menor);
    return 0;
}