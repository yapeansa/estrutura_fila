#ifndef FUNC
#define FUNC

typedef struct fila fila;
void criar(fila **f);
int inserir(fila *f, int v);
int fila_vazia(fila *f);
float retirar(fila *f);
void percorrer(fila *f);
void liberar(fila *f);

#endif
