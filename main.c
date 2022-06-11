#include "MinhaBiblioteca.h"

int main(void) {
    int quantidade, vetor[30];
    int *pvetor = &vetor;

    scanf("%i", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%i", &vetor[i]);
    }
    
    int maior = vetor[0], menor = vetor[0];

    return 0;
}