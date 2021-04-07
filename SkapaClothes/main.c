#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

int menuInicio (void){

	char str[10];
	int num;

	printf("\n\nMENU DE INICIO \n");
	printf("______________________________________________________________________________\n");
	printf("1. Inicio de sesion\n");
	printf("2. Registrar usuario\n");
	printf("3. Recuperar contraseña\n");
	printf("4. Salir\n");

	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%i", &num);

	return num;
}

int menuPrincipal (void){

	char str[10];
	int num;

	printf("\n\nMENU PRINCIPAL\n");
	printf("______________________________________________________________________________\n");
	printf("1. Añadir productos a la cesta\n");
	printf("2. Mostrar mi cesta\n");
	printf("3. Finalizar compra\n");
	printf("4. Atras\n");
	printf("5. Ayuda\n");

	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%i", &num);

	return num;
}

/*int menuProductos (Producto* productosStock){

	char str[10];
	int num;

	printf("SELECCIONE LOS PRODUCTO QUE DESEA AÑADIR A LA CESTA:\n");
	printf("_____________________________________________________\n");

	volcarProductos(productosStock, 8);
	listarProductos(productosStock, 8);

	printf("99. TERMINAR COMPRA\n");

	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%i", &num);

	return num;
}
*/

int main(void){


	Producto *productosStock = (Producto*)malloc(100*sizeof(Producto));
	Producto *cesta = (Producto*)malloc(100*sizeof(Producto));

	Usuario usuarios [100];

	int posicion = 0;
	int acceso;

	int flag = 0;


	while (flag == 0){

		int opcion0 = menuInicio();

		//MENU INICIO (LOGIN/REGISTRO/CONTRASENYA/SALIR)
		switch (opcion0){

		case 1:
			acceso = login(usuarios);

			if (acceso == 1){
				//flag = 1;

				printf("______________________________________________________________\n");
				printf("-----------------SESION INICIADA CORRECTAMENTE--------------------\n");

				int flag2 = 0;

				//MENU PRINCIPAL (LISTA PRODUCTOS/PEDIDOS/ATRAS/AYUDA)
				while (flag2 == 0){

					int opcion1 = menuPrincipal();

					switch (opcion1){

					int opcion2;
					int pos = 0;

					case 1:

						do{
							//opcion2 = menuProductos(productosStock);
							Producto p = *(productosStock + opcion2);
							//meterEnCesta(p, cesta, &pos);

						}while (opcion2 != 99);

						break;

					case 2:

						printf("\nMI CESTA\n");
						printf("______________________________________________________\n");

						//listarProductos(cesta, pos - 1);

						break;

					case 3:

						//terminarPedido(cesta, pos-1);
						flag2 = 1;

						char f = getchar();

						break;

					case 4:
						flag2 = 1;
						break;

					case 5:
						//ayuda();
						break;

					default:
						printf("Caracter introducido invalido");
						break;
					}
			}


			}else{
				printf("Acceso denegado, porfavor intentelo otra vez\n");

			}

			break;

		case 2:
			registry(usuarios, posicion);
			posicion = posicion + 1;
			break;


		case 3:
			contrasenyaOlvidada(usuarios);
			break;

		case 4:
			printf("____________________________________________________________________\n");
			printf("----------------------PROGRAMA FINALIZADO---------------------------\n");
			flag = 1;

			break;

		default:
			printf("Codigo introducido incorrecto\n");
		}

	}
	return 0;

}
