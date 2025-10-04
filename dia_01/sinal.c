#include <stdio.h> // importa a biblioteca padrão de entrada e saída
#include <locale.h> // importa a biblioteca de localização

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // define a localização para português do Brasil


    char sinal;  // declara uma variável do tipo caractere para armazenar o sinal da operação
    float num1, num2, resultado; // declara variáveis do tipo float para armazenar os números e o resultado

    do { // inicia um loop que continuará até que um sinal válido seja inserido

    printf("Escolha um tipo de operação: ");
    scanf("%c", &sinal); // lê o caractere inserido pelo usuário e armazena na variável 'sinal'

    if (sinal == '+' || sinal == '-' || sinal == '*' || sinal == '/') { // verifica se o sinal é um dos válidos
        printf("Operação valida!\n");
        printf("Digite o primeiro numero:\n");
        scanf("%f" , &num1); // lê o primeiro número inserido pelo usuário
        printf("Digite o segundo numero:\n");
        scanf("%f" , &num2); // lê o segundo número inserido pelo usuário

        switch (sinal)
        {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da soma é: %.f\n", resultado);
            break;
        
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtração é: %.f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %.f\n", resultado);
            break;
        case '/':
            if (num2 != 0) { // verifica se o segundo número não é zero
                resultado = num1 / num2;
                printf("O resultado da divisão é: %.f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }            
        
        default:
            break;
        }

    } else
    {
       printf("Operação invalida!\n");  
    }
    } while (sinal != '+' && sinal != '-' && sinal != '*' && sinal != '/'); // continua o loop enquanto o sinal não for válido
    
   return 0;
}

// fim do programa

