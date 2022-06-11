#include "MinhaBiblioteca.h"
#include <stdio.h>
#include <stdlib.h>

void Funcao(int *pvetor, int qtd, int *maior, int *menor) {
    for (int i = 0; i < qtd; i++) {
        if (pvetor[i] > *maior){
            *maior = pvetor[i];
        }
    }
    for (int i = 0; i < qtd; i++) {
        if (pvetor[i] < *menor){
            *menor = pvetor[i];
        }
    }
}