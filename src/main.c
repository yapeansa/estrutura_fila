#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int opcao = 0, v;

    fila *f;
    criar(&f);

    do
    {
        printf("Escolha uma opção:\n");
        printf("(1) Inserir (2) Retirar (3) Listar (4) Liberar\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o elemento a inserir: ");
            scanf("%d", &v);
            if (inserir(f, v))
                printf("Elemento %d inserido.\n", v);
            else
                printf("Fila cheia.\n");
            break;
        case 2:
            v = retirar(f);
            if (v)
                printf("Elemento %d retirado do início da fila.\n", v);
            else
                printf("A fila está vazia.\n");
            break;
        case 3:
            percorrer(f);
            break;
        case 4:
            liberar(f);
            break;
        default:
            printf("Por favor, digite uma opção válida.\n");
        }
    } while (opcao != 4);

    return 0;
}
