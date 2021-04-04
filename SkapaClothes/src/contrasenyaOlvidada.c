#include <stdio.h>
#include <stdlib.h>
#include "structs.h"


void contrasenyaOlvidada(Usuario* usuarios) {

	Usuario usuario;

	char correo[20];
	char str[10];

	printf("Introduce tu correo electrónico y le enviaremos un documento con los pasos a seguir\n");

	printf("CORREO ELECTRONICO:  ");
			fflush(stdout);
			fgets(str, 40, stdin);
			sscanf(str, "%s", &correo);
			strcpy(usuario.correo, correo);
}
