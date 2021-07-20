#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Qual é o seu nome? ");
    char nome [50];
    fgets(nome, 49, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Quantos anos você tem? ");
    int idade;
    scanf(" %i", &idade);
    printf("Qual é o seu peso? (Kg) ");
    float peso;
    scanf(" %f", &peso);
    printf("\n------<<< PROCESSANDO >>>------");
    printf("\nMuito prazer, %s. Você tem %i anos e pesa %.2fKg, correto?", nome, idade, peso);
    printf("\nFIM.");
}
