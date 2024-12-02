#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define TAM 5

typedef struct fila
{
    int vet[TAM];
    int n;
    int ini;
} fila;

void criar(fila **f)
{
    fila *tmp = (fila *)malloc(sizeof(fila));
    tmp->n = 0;
    tmp->ini = 0;
    *f = tmp;
}

int inserir(fila *f, int v)
{
    int fim;

    if (f->n == TAM)
        return 0;

    fim = (f->ini + f->n) % TAM;
    f->vet[fim] = v;
    f->n++;

    return 1;
}

int fila_vazia(fila *f)
{
    return (f->n == 0);
}

float retirar(fila *f)
{
    int v;

    if (fila_vazia(f))
        return 0;

    v = f->vet[f->ini];
    f->ini = (f->ini + 1) % TAM;
    f->n--;
    return v;
}

void percorrer(fila *f)
{
    if (fila_vazia(f))
        printf("Fila vazia.\n");
    else
    {
        int dim = f->n, index = f->ini;
        for (int j = dim; j != 0; j--)
        {
            printf("%d ", f->vet[index]);
            index = (index + 1) % TAM;
        }
        printf("\n");
    }
}

void liberar(fila *f)
{
    printf("Liberando fila...");
    free(f);
}
