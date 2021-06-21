#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include <stdbool.h>

void registro (FILE *fichero){


	char nombre[20];
	char nombre_fichero[20];
	char contrasenya[20];
	char contrasenya_fichero[20];


		printf("\nREGISTRO DE NUEVO USUARIO\n");
		printf("______________________________________________________________________________\n");


		printf("NOMBRE DE USUARIO:  ");
		fflush(stdout);
		fgets(nombre_fichero, 20, stdin);
		sscanf(nombre_fichero, "%s", nombre);

		printf("CONTRASEÑA:  ");
		fflush(stdout

		);
		fgets(contrasenya_fichero, 20, stdin);
		sscanf(contrasenya_fichero, "%s", contrasenya);
		printf("\nREGISTRO REALIZADO CON EXITO");

		if ((fichero = fopen(fichero, "at")) == NULL) {
			printf("Error al abrir el fichero.\n");
			exit(1);
		}

		fprintf(fichero,"%s %s\n", nombre, contrasenya);

	fclose(fichero);

}

