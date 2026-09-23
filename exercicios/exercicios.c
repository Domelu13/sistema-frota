#include <stdio.h>

struct aluno {
    char nome[40];
    int idade;
    float nota1;
    float nota2;
    float media;
};

int main() {
    // Vetor com espaço para 3 alunos
    struct aluno alunos[3];

    // ================= ALUNO 1 =================
    printf("--- Aluno 1 ---\n");
    printf("Digite o nome: ");
    scanf(" %39s", alunos[0].nome);
    printf("Digite a idade: ");
    scanf(" %d", &alunos[0].idade);
    printf("Digite a nota 1: ");
    scanf(" %f", &alunos[0].nota1);
    printf("Digite a nota 2: ");
    scanf(" %f", &alunos[0].nota2);

    alunos[0].media = (alunos[0].nota1 + alunos[0].nota2) / 2.0;

    // ================= ALUNO 2 =================
    printf("\n--- Aluno 2 ---\n");
    printf("Digite o nome: ");
    scanf(" %39s", alunos[1].nome);
    printf("Digite a idade: ");
    scanf(" %d", &alunos[1].idade);
    printf("Digite a nota 1: ");
    scanf(" %f", &alunos[1].nota1);
    printf("Digite a nota 2: ");
    scanf(" %f", &alunos[1].nota2);

    alunos[1].media = (alunos[1].nota1 + alunos[1].nota2) / 2.0;

    // ================= ALUNO 3 =================
    printf("\n--- Aluno 3 ---\n");
    printf("Digite o nome: ");
    scanf(" %39s", alunos[2].nome);
    printf("Digite a idade: ");
    scanf(" %d", &alunos[2].idade);
    printf("Digite a nota 1: ");
    scanf(" %f", &alunos[2].nota1);
    printf("Digite a nota 2: ");
    scanf(" %f", &alunos[2].nota2);

    alunos[2].media = (alunos[2].nota1 + alunos[2].nota2) / 2.0;

    // ================= RELATÓRIO FINAL =================
    printf("\n=== RESULTADOS ===\n");
    printf("Aluno 1: %s | Idade: %d | Nota1: %.2f | Nota2: %.2f | Media: %.2f\n", 
           alunos[0].nome, alunos[0].idade, alunos[0].nota1, alunos[0].nota2, alunos[0].media);

    printf("Aluno 2: %s | Idade: %d | Nota1: %.2f | Nota2: %.2f | Media: %.2f\n", 
           alunos[1].nome, alunos[1].idade, alunos[1].nota1, alunos[1].nota2, alunos[1].media);

    printf("Aluno 3: %s | Idade: %d | Nota1: %.2f | Nota2: %.2f | Media: %.2f\n", 
           alunos[2].nome, alunos[2].idade, alunos[2].nota1, alunos[2].nota2, alunos[2].media);

    return 0;
}