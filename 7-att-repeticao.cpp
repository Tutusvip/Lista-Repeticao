#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

 	int i ,numero[10],calculo=0;
    for ( i = 0; i < 10; i++){
        printf("Numero %d: ",i);
        scanf("%d",&numero[i]);
    }
   
    for ( i = 0; i < 10; i++){
        calculo+=numero[i];
    }
    printf("%d",calculo);
    
    
    return(0);
}
