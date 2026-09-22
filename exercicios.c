#include <stdio.h>
float calcular_media(float m1, float m2) {
float resultado = (m1 + m2) / 2;
return resultado;

}

int main(){
    float nota1;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    float nota2;
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    float media = calcular_media(nota1, nota2);
    printf("A media das notas %.2f e %.2f e: %.2f\n", nota1, nota2, media);
return 0;
}