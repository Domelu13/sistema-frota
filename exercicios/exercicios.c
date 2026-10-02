#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("1- Cadastrar carro\n");
        printf("2- Mostrar carros cadastrados\n");
        printf("3- Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Ola\n");
                break;
            case 2:
                printf("Tchau\n");
                break;
            case 3:
                printf("Sair\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 3);

    return 0;
}