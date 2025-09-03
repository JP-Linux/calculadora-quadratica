#include "equacoes.h"
#include <stdio.h>

void limpar_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

_Bool verifica_faixa_menu(int num)
{
    if (num > 0 && num <= 3) {
        return 1;
    } else {
        printf("Opção inválida! digite [1-3]\n");
        return 0;
    }
}

int menu()
{
    int opcao;
    do {
        printf("\n-------------------------------------\n");
        printf("\tCálculo Computacional\n");
        printf("-------------------------------------\n\n");
        printf("[ 1 ] Função Quadratica\n");
        printf("[ 2 ] Limites\n");
        printf("[ 3 ] Sair\n");
        printf(">>> ");

        scanf("%d", &opcao);
        limpar_buffer();
    } while (!verifica_faixa_menu(opcao));
    return opcao;
}

int main()
{
    while (1) {

        int op = menu();
        if (op == 3) {
            printf("\nSaindo ...\n\n");
            break;
        }

        switch (op) {
        case 1:
            quadratica();
            break;
        case 2:
            limite();
            break;
        }
    }
    return 0;
}
