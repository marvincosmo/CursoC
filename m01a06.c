#import <stdio.h>
#import <locale.h>
#define TOTAL 22 // Esta é uma forma de declarar uma constante
void main() {
    setlocale(LC_ALL, "Portuguese");
    // const int TOTAL = 8; - Esta é outra forma de declarar uma constante
    printf("%d", TOTAL);
}
