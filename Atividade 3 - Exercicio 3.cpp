#include <stdio.h>
#include <string.h>

int main() {
char stA[20], stB[20];

    while(1) {
        printf ("\nDigite uma palavra ou digite / para sair do programa: ");
        gets (stA);
        
		if (stA[0] != '/') {
            printf ("\nDigite outra palavra: ");
            gets (stB);
            strcat (stA, stB);
            printf ("Soma das duas palavras digitadas: %s", stA);
        	
			} else {
            	return printf ("Fim do programa\n");
        }  
    }
}

