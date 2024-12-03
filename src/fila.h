#ifndef FILA
#define FILA

typedef struct fila fila;
fila *criar(void);
int inserir(fila *f, int v);
int fila_vazia(fila *f);
float retirar(fila *f);
void percorrer(fila *f);
void liberar(fila *f);

#endif
