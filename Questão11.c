#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    // Declara��o de vari�veis
    char senhadeAcesso [250] = "Tomatevermelho1.";
    char senhaDigitada [250];

// Solicitando dados
do {
    printf ("Informe a senha de acesso: ");
    gets (senhaDigitada);
    
    if (strcmp (senhadeAcesso, senhaDigitada) != 0) {
        system ("cls");
        printf ("Senha INV�LIDA! Insira novamente...\n\n");  
    
    } else {
        printf ("\nAcesso permitido. BEM-VINDO!\n"); }

} while (strcmp (senhadeAcesso, senhaDigitada) != 0);
    
    return 0;
}