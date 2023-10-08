#include <stdio.h>

//Se crea el contador para productos 
int tamano (long long int cp) {
	int contar = 0;


if (cp == 0) 
{
	return 1;
}

while (cp != 0)
{
	cp /= 10;
	contar++; 
}


return contar;
}

//Se crea el contador para tienda 

int tamano2 (int ct) {
	int contar2 = 0;


if (ct == 0) 
{
	return 1;
}

while (ct != 0)
{
	ct /= 10;
	contar2++; 
}
return contar2;
}
main()
{
	printf("Supermercado D5 \n");
	printf("Bienvenido\n");
	
	long long int cp;
	
while (1){

	printf("Ingrese el codigo del producto: ");
	scanf("%lld",&cp);
	
	int tamacod = tamano(cp);
	

	
	if (tamacod == 10)
	{
		if (cp == 8949899430LL || cp == 7653512593LL || cp == 9383867373LL)
		{
			printf("Felicidades ha obtenido un descuento del 20%% en su producto\n");
		}
		else {
			printf("Producto registrado correctamente\n");
		} 
		break;
	} 
	else if (cp == 	88392904209LL)
	{
		printf("Felicidades ha obtenido un descuento del 20%% en su producto\n");
		break;
	}
	else {
		printf("Error, codigo de producto no valido	\n"); 
		printf("El codigo de producto debe tener 10 digitos\n");
		}	
	
}
	int ct;
	
	while (1)
	{
	printf("Ingrese el codigo de la tienda: ");
	scanf("%d",&ct);
	
	int tamatie = tamano2(ct);
	
	if (tamatie == 5) 
	{

		if (ct >= 20000 && ct <= 20999) 
			{
			printf("Codigo ingresado es correcto\n");
            break;
			}
			else 
			{
				printf("Error, codigo ingresado no inicia por el prefijo '20'\n");
			}	
				
	}
	else {
		printf("Error, codigo de tienda no valido\n");
		printf("El codigo de tienda debe tener 5 digitos\n");
		}
	}	
	
	if ((cp == 8949859430 && ct == 20763) || 
    (cp == 1653312553 && ct == 20221) || 
    (cp == 2483867373 && ct == 20130) || 
    (cp == 1839230922 && ct == 20561))
	{
		printf("!!Felicidades usted ha sido seleccionado para participar en la rifa de un vehiculo 0 kilometros¡¡\n");
	}
	else {
		printf("Productos registrados correctamente \n");
	}
	
	
	return 0; 	
		
}
