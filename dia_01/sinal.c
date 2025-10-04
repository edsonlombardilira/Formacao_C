#include <stdio.h> // importa a biblioteca padrão de entrada e saída
#include <locale.h> // importa a biblioteca de localização

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // define a localização para português do Brasil


    char sinal; // declara uma variável do tipo caractere para armazenar o sinal da operação

    do { // inicia um loop que continuará até que um sinal válido seja inserido

    printf("Escolha um tipo de operação: ");
    scanf("%c", &sinal); // lê o caractere inserido pelo usuário e armazena na variável 'sinal'

    if (sinal == '+' || sinal == '-' || sinal == '*' || sinal == '/') { // verifica se o sinal é um dos válidos
        printf("Operação valida!\n");
    } else
    {
       printf("Operação invalida!\n");  
    }
    } while (sinal != '+' && sinal != '-' && sinal != '*' && sinal != '/'); // continua o loop enquanto o sinal não for válido
    
   return 0;
}

// fim do programa
