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
    for (int i = 0; i < 3; i++) {
    printf("Digite a placa do carro: ");
    scanf("%s", frota[i].placa);
    printf("Digite o Km do carro: ");
    scanf("%d", &frota[i].km);
    printf("Digite a quantidade de combustivel no tanque: ");
    scanf("%f", &frota[i].tanque);
    printf("digite o estado de limpeza do carro: ");
    scanf("%s", frota[i].estado_do_carro);
    printf("Digite o status atual do carro: ");
    scanf("%s", frota[i].status_atual);

    printf("Placa: %s | Km: %d | Tanque: %.2f | Estado: %s | Status: %s\n", frota[i].placa, frota[i].km, frota[i].tanque, frota[i].estado_do_carro, frota[i].status_atual);
    }
    return 0;
}

