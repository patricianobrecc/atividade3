#include <stdio.h>
#include <string.h>

int main() {
char st[20];

    while(1){
        printf("Digite uma palavra ou digite / para encerar: ");
        gets (st);
        
		if (st[0] == '/') {
            return printf("Fim do programa\n");
        
		} else {
            printf ("Numero de letras digitado: %d\n", strlen(st));
        }
    }
}

