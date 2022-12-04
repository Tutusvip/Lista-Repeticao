#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int impar=1,impares=1;
    int i;
    for ( i = 1; i <= 49; i++){ 
        impar = impar +2;
        impares = impar +impares;
    }
    printf("  %d  ",impares);
    return(0);
}
