#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal"; // char nome[] pode ser substituído por char *nome
    printf("%s é do sexo %c, tem %i anos e pesa %.2fKg.", nome, sexo, idade, peso);
}
