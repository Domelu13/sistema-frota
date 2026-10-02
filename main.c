#include <stdio.h>

struct carro {
    char placa[10];
    int km;
    float tanque;
    char estado_do_carro[20];
    char status_atual[50];
};
int main (){
    struct carro frota[60];
    int total = 0;
    int opcao;
    do {
        printf("1- Cadastrar carro\n");
        printf("2- Mostrar carros cadastrados\n");
        printf("3- Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:

        printf("Digite a placa do carro: ");
        scanf("%s", frota[total].placa);
        printf("Digite a quilometragem do carro: ");
        scanf("%d", &frota[total].km);
        printf("Digite a quantidade de combustivel no tanque: ");
        scanf("%f", &frota[total].tanque);
        printf("digite o estado de limpeza do carro: ");
        scanf("%s", frota[total].estado_do_carro);
        printf("Digite o status atual do carro: ");
        scanf("%s", frota[total].status_atual);
        total++;
        break;
            case 2:      
           
            for (int i = 0; i < total; i++) {
                printf("Placa: %s | Km: %d | Tanque: %.2f | Estado: %s | Status: %s\n", 
               frota[i].placa, frota[i].km, frota[i].tanque, frota[i].estado_do_carro, frota[i].status_atual);
    }
    break;
            
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