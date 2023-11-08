    #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    
    //Definindo Variáveis
    float notas = 0;
    float media = 0;
    int quantidadeDeNotas;
    int contador = 1;
    int soma = 0;
    int i;

    //Solicitando dados
    printf("Digite a quantidade de notas: ");
    scanf("%i", &quantidadeDeNotas);

    for ( i = 0; i < quantidadeDeNotas; i++)
    {
        printf("Informe a %i° nota: ",contador);
        scanf("%f", &notas);
        soma += notas; 
        contador++;
    }
        media = soma / quantidadeDeNotas;

        printf("Sua Média é: %.1f",media);
    
    
    return 0;
}