#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include <stdbool.h>


bool login(FILE* fichero) {

		char nombre[20];
		char nombre_fichero[20];
		char contrasenya[20];
		char contrasenya_fichero[20];

		bool existe;



			printf("INICIAR SESION\n");
			printf("______________________________________________________________________________\n");


			printf("NOMBRE DE USUARIO:  ");
			fflush(stdout);
			scanf("%s", nombre_fichero);

			printf("CONTRASEÑA:  ");
			fflush(stdout);
			scanf("%s", contrasenya_fichero);


			if((fichero = fopen("Usuarios.txt", "rt"))== NULL){
				printf("No ha sido posible abrir el fichero");
				exit(1);
			}

			//comprobamos si existe
			existe = false;
			while(fscanf(fichero, "%s %s", nombre, contrasenya) != EOF){
				if(strcmp(nombre,nombre_fichero) == 0
						&& strcmp(contrasenya,contrasenya_fichero) == 0)
					existe = true;
			}


			fclose(fichero);
			return existe;

}
