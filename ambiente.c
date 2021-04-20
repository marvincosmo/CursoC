#include <stdio.h>
#include <locale.h>
/*
Programa criado por Gustavo Guanabara para Estudonauta.
*/
void main() {
    setlocale(LC_ALL, "Portuguese"); // Muda a zona de codificação de caracteres.
    printf("C é \"SUPER\" fácil!"); // printf significa "print formatado"
}
