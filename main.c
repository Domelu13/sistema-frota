#include <stdio.h>
int main(){
char placa[50];
int km;
float tanque;

printf("Digite a placa do carro: ");
scanf("%s", placa);
printf("Digite a quantidade de km rodados: ");
scanf("%d", &km);
printf("Digite a quantidade de litros no tanque(em porcentagem): ");
scanf("%f", &tanque);
printf("Placa: %s | KM: %d | Tanque: %.2f%%\n", placa, km, tanque);
return 0;
}