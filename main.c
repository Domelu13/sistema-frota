#include <stdio.h>

struct carro {
    char placa[10];
    int km;
    float tanque;
    char estado_do_carro[20];
    char status_atual[50];
};
int main (){
    struct carro carro1;
    printf("Digite a placa do carro: ");
    scanf("%s", carro1.placa);
    printf("Digite o Km do carro: ");
    scanf("%d", &carro1.km);
    printf("Digite a quantidade de combustivel no tanque: ");
    scanf("%f", &carro1.tanque);
    printf("digite o estado de limpeza do carro: ");
    scanf("%s", carro1.estado_do_carro);
    printf("Digite o status atual do carro: ");
    scanf("%s", carro1.status_atual);

   printf("Placa: %s | Km: %d | Tanque: %.2f | Estado: %s | Status: %s\n", carro1.placa, carro1.km, carro1.tanque, carro1.estado_do_carro, carro1.status_atual);
    return 0;
}