#include <stdio.h>
//Programa para convertir un decimal a binario

main()
{
	int opc = 1;
	do {
		
		int cont = 0; //contador de elementos del vector
		int dec;
		int vec[30];
	
		printf("Ingrese el numero decimal: ");
		scanf("%d", &dec);
	
		for(int i = 0; i < 30; i++)
		{
			vec[i] = dec % 2;
			dec /= 2;
			cont++; //Realizo un mejor control en el flujo al utilizar un contar de vueltas positivas
			if(dec == 0) //Se fuerza la salida del bucle cuando la division llega a 0
			break;	
		}
		
    	for (int i = 0; i < cont / 2; i++) 
		{
        	int temp = vec[i]; //se guarda temporalmente el valor actual del elemento en la posición i del vector
        	vec[i] = vec[cont - 1 - i]; //El valor en la posición i se sobrescribe con el valor del elemento en la posición simétrica desde el final del vector (longitud - 1 - i)
        	vec[cont - 1 - i] = temp; //el valor original en la posición simétrica desde el final se coloca en la posición i
    	}

		printf("El numero en binario es: ");
		for(int i = 0; i < cont; i++)
		printf("\n %d", vec[i]);
		printf("\n");
		
		printf("\n Repetir el programa (cualquier numero para continuar y 0 para salir):  ");
		scanf("%d", &opc);
		
	}while(opc != 0);
}