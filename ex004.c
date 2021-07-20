#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    __fpurge(stdin); //Se for no Windows é fflush(stdin);
    printf("NOME: ");
    char nome1 [20], nome2 [20], nome3 [20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    fgets(nome1, 49, stdin);
    nome1[strcspn(nome1,"\n")] = '\0';
    printf("SEXO: [M/F] ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota1);
    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    __fpurge(stdin); //Se for no Windows é fflush(stdin);
    printf("NOME: ");
    fgets(nome2, 49, stdin);
    nome2[strcspn(nome2,"\n")] = '\0';
    printf("SEXO: [M/F] ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota2);
    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    __fpurge(stdin); //Se for no Windows é fflush(stdin);
    printf("NOME: ");
    fgets(nome3, 49, stdin);
    nome3[strcspn(nome3,"\n")] = '\0';
    printf("SEXO: [M/F] ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf(" %f", &nota3);
    printf("\n\nLISTAGEM COMPLETA:\n");
    printf("------------------------------\n");
    printf("NOME                SEXO NOTA\n");
    printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);
    printf("------------------------------\n");
}
