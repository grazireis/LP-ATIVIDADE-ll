#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL,"portuguese");
    
    //Declarando vari�veis
    int primeiroNumero;
    int segundoNumero;

    //Comandos

    printf("Digite o primeiro n�mero: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%i", &segundoNumero);

    if (primeiroNumero > segundoNumero)
    {
        printf("%i � maior que %i",primeiroNumero,segundoNumero);
    } else
        printf("%i � maior que %i",segundoNumero,primeiroNumero);
    
    
    return 0;
}