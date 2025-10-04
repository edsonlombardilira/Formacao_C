#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");


    char sinal;

    do {

    printf("Escolha um tipo de operação: ");
    scanf("%c", &sinal);

    if (sinal == '+' || sinal == '-' || sinal == '*' || sinal == '/') {
        printf("Operação valida!\n");
    } else
    {
       printf("Operação invalida!\n");  
    }
    } while (sinal != '+' && sinal != '-' && sinal != '*' && sinal != '/');
    
   return 0;
}