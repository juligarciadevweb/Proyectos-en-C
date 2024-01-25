#include <stdio.h>

main()
{	
	int opc = 5;
	do{
		
		int cont = 0; //contador de elementos del vector
		int dec;
		int vec[30];
	
		printf("*********Bienvenido al convertidor de decimal a hexa**********");
		printf("\n\nIngrese el numero decimal: ");
		scanf("%d", &dec);
		
		// Validación de entrada
        if (dec < 0) 
		{
            printf("Por favor, ingrese un numero no negativo.\n");
            continue;
        }
	
		for(int i = 0; i < 30; i++)
		{
			vec[i] = dec % 16;
			dec /= 16;
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

		printf("\nEl numero en hexadecimal es: ");
		for(int i = 0; i < cont; i++)
		{
			if(vec[i] == 10)
				printf("A");
			else if(vec[i] == 11)
				printf("B");
			else if(vec[i] == 12)
				printf("C");
			else if(vec[i] == 13)
				printf("D");
			else if(vec[i] == 14)
				printf("E");
			else if(vec[i] == 15)
				printf("F");
			else
				printf("\n %d", vec[i]);
		}
		printf("\nRepetir el programa (cualquier numero para continuar y 0 para salir):  ");
		scanf("%d", &opc);
	}while(opc != 0);
}