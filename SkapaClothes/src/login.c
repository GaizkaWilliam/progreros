#include <stdio.h>
#include <stdlib.h>
#include "structs.h"


void imprimirArray (Usuario*usuarios, int tamanyo){

	for (int i = 0; i < tamanyo ; i++){
		printf("NOM: %s", (usuarios+ i)->nombre);
		printf("PASS: %s", (usuarios+ i)->contrasenya);
	}

}

int comprobarUsuario (char name [10], char pass [10], Usuario* usuarios, int tamanyo){


	int acceso = 0;
	for (int i = 0; i < tamanyo; i++){

		if((strncmp((usuarios+ i)->nombre, name)) == 0){
			if ((strcmp((usuarios + i)->contrasenya, pass)) == 0){
				acceso = 1;
			}
		}
	}

	return acceso;

}


int login(Usuario* usuarios) {

	int acceso = 0;

	char str[10];
	char name[10];
	char password[10];

	printf("\nINICIO DE SESION\n");
	printf("______________________________________________________________________________\n");

	printf("USUARIO:  ");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &name);

	printf("CONTRASEÑA:  ");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &password);

	acceso = comprobarUsuario(name, password, usuarios, 100);


	return acceso;

}
