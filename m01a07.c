#import <stdio.h>
#import <locale.h>
#import <string.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    /*
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de informar os valores %d e %.2f. Obrigado!", n, m);

    char r;
    char s;
    printf("Digite apenas uma letra: ");
    r = getchar();
    getchar();
    printf("Digite outra letra: ");
    s = getchar();
    getchar();
    printf("Você acabou de informar as letras \"%c\" e \"%c\".", r, s);
    */
    char nome[30];
    char ender[50];
    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);
    printf("Seu endereço: ");
    fgets(ender, 50, stdin);
    int q1 = strcspn(nome, "\n");
    nome[q1] = '\0';
    int q2 = strcspn(ender, "\n");
    ender[q2] = '\0';
    printf("Você digitou \"%s\", que mora na \"%s\".", nome, ender);
}
