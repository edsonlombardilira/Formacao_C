#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");


    char sinal;

    do {

    printf("Escolha um tipo de opera��o: ");
    scanf("%c", &sinal);

    if (sinal == '+' || sinal == '-' || sinal == '*' || sinal == '/') {
        printf("Opera��o valida!\n");
    } else
    {
       printf("Opera��o invalida!\n");  
    }
    } while (sinal != '+' && sinal != '-' && sinal != '*' && sinal != '/');
    
   return 0;
}