#include <stdio.h>
#include <string.h>

int main() {
char stA[20], stB[20];

    while(1) {
        printf("\n Digite uma palavra ou digite / para sair do programa: ");
        gets(stA);
        
		if (stA[0] != '/') {
            printf("\nDigite outra palavra: ");
            gets(stB);
            
		if (strcmp (stA, stB)) {
            printf("\nDiferentes\n");                
            
				} else {
                	printf("\nIguais\n");
            }
        		} else {
            return printf("Fim do programa\n");
        }  
    }
}
