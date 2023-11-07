#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

//Declarando Variaveis

    int dia;
    float valor;
    float valorD;
    float valorF;


//Solicitando Dados

 printf("qual dia da semana você esta: ");
    scanf("%d", &dia);
    system("cls||clear");

    printf("qual ê o valor da sua compra: ");
    scanf("%f", &valor);
    system("cls||clear");
    
 if (valor > 100)
    {
        if (dia >= 2 && dia <= 5)
        {
            valorD = (valor)*10 / 100;
            valorF = valor - valorD;

            printf("valor original: %.2f\n", valor);
            printf("valor descontado: %.2f\n", valorD);
            printf("valor final: %.2f", valorF);
        }
        else
        {
            valorD = (valor)*15 / 100;
            valorF = valor - valorD;

            printf("valor original: %.2f\n", valor);
            printf("valor descontado: %.2f\n", valorD);
            printf("valor final: %.2f", valorF);
        }
    }
    else
    {
        printf("valor final: %.2f", valor);
    }

    return 0;
}