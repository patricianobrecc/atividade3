#include <stdio.h>
#include <string.h>

int main () {
char st[20], stC[20];
	
	while(1) {
        printf ("\n Digite uma palavra ou digite / para sair do programa: ");
        gets (st);
        
	if (st[0] == '/') {
        return printf("\n Fim do programa");
       
	} else {
        strcpy (stC, st);
        printf ("\nFoi digitado: %s\n", stC);
        }
    }
} 
