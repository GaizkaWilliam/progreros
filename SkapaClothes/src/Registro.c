#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
//
void registry (Usuario* usuarios, int posicion){

	char str[10];
	char nombre[10];
	char correo[20];
	char contrasenya[10];
	char contrasenyaComprobar[10];
	int flag = 0;

	Usuario usuario;


	while (flag == 0){

		printf("\nREGISTRO DE NUEVO USUARIO\n");
		printf("______________________________________________________________________________\n");


		printf("NOMBRE DE USUARIO:  ");
		fflush(stdout);
		fgets(str, 10, stdin);
		sscanf(str, "%s", &nombre);
		strcpy(usuario.nombre, nombre);

		printf("CORREO ELECTRONICO:  ");
		fflush(stdout);
		fgets(str, 40, stdin);
		sscanf(str, "%s", &correo);
		strcpy(usuario.correo, correo);


		printf("CONTRASEÑA:  ");
		fflush(stdout);
		fgets(str, 10, stdin);
		sscanf(str, "%s", &contrasenya);


		printf("CONFIRMACION CONTRASEÑA:  ");
		fflush(stdout);
		fgets(str, 10, stdin);
		sscanf(str, "%s", &contrasenyaComprobar);


		if (strncmp(contrasenya, contrasenyaComprobar) == 0){
			strcpy(usuario.contrasenya, contrasenya);
			flag = 1;
			*(usuarios + posicion) = usuario;
			printf("________________________________________________________________________\n");
			printf("--------------------CUENTA CREADA CORRECTAMENTE--------------------------\n\n");
			fflush(stdout);


		}else{
			printf("Las contraseñas no coinciden, porfavor intentelo de nuevo\n\n");
			fflush(stdout);

		}

	}

}


