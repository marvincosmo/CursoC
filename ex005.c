#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int computador = rand() % 5 + 1;
    int jogador;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%i", &jogador);
    printf("Eu pensei no número %i e você pensou no número %i.\n", computador, jogador);
}

