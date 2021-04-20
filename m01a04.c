#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade.\n", "Marcos", 38);
    printf("Seu peso atual é de %6.2fKg.\n", 78.5);
    printf("O seu sexo é %c.", 'M');
}
