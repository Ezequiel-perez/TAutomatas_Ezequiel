#include <stdio.h>

int main() {
   int interruptor;
   while(interruptor!=2){
	   
		printf("ingresa un  0 si quieres materner apagado el interruptor de lo contrario ingresa un 1, si quieres que el progranma termine ingresa un 2\n");
		scanf("%i",&interruptor);
		if(interruptor==1){
			printf("interruptor encendido\n");
	}else{
	    	if(interruptor==0){
	    	    printf("interruptor apagado\n");
	    	}
		}
	}
    return 0;
}
