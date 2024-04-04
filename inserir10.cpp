#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó da árvore
struct NoArv {
    int info;
    struct NoArv* esq;
    struct NoArv* dir;
};

// Função para criar um novo nó
struct NoArv* arv_cria(int x, struct NoArv* sae, struct NoArv* sad) {
    struct NoArv* novoNo = (struct NoArv*)malloc(sizeof(struct NoArv));
    if (novoNo != NULL) {
        novoNo->info = x;
        novoNo->esq = sae;
        novoNo->dir = sad;
    }
    return novoNo;
}

// Função para liberar a memória alocada pela árvore
void arv_libera(struct NoArv* a) {
    if (a != NULL) {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
}

// Função para verificar se um elemento está na árvore
int arv_contem(struct NoArv* a, int x) {
    if (a == NULL)
        return 0; // Árvore vazia: não encontrou
    if (a->info == x)
        return 1; // Encontrou o elemento
    else
        return (arv_contem(a->esq, x) || arv_contem(a->dir, x));
}

// Função para imprimir a árvore (percurso em ordem)
void arv_imprime(struct NoArv* a) {
    if (a != NULL) {
        arv_imprime(a->esq);
        printf("%d ", a->info);
        arv_imprime(a->dir);
    }
}

int main() {
    // Exemplo de uso
    struct NoArv* raiz = arv_cria(10, NULL, NULL);
    raiz->esq = arv_cria(5, NULL, NULL);
    raiz->dir = arv_cria(15, NULL, NULL);

    printf("Árvore binária em ordem: ");
    arv_imprime(raiz);
    printf("\n");

    arv_libera(raiz); // Libera a memória

    return 0;
}

