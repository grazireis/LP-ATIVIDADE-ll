#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, numeros, par = 0, impar = 0, somaPar = 0, somaImpar = 0;
    float mediaPar = 0, mediaImpar = 0; 

//Comando

do {
    printf ("Informe o %dº número: ", a + 1);
    scanf ("%d", &numeros);

    if (numeros > 0) {
        a++;
        
    if (numeros % 2 == 0) {
        par++;
        somaPar += numeros;
            
    } else {
        impar++; 
        somaImpar += numeros; }
}
            
} while (numeros >= 0);

    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;

system ("cls || clear");

    printf ("CONTADOR DE PARES E ÍMPARES\n\n");
    printf ("Quantidade de pares: %d\n", par);
    printf ("Quantidade de ímpares: %d\n", impar);
    printf ("Média de pares: %.2f\n", mediaPar);
    printf ("Média de ímpares: %.2f\n", mediaImpar);

    return 0;
}
