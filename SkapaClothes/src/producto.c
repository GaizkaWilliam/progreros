#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

void meterEnCesta (Producto p, Producto* cesta, int *posicion){

	*(cesta + *posicion) = p;
	*posicion = *posicion + 1;


}

void volcarProductos(Producto* productos, int tamanyo){//

	Producto p1, p2, p3, p4, p5, p6, p7, p8;

	p1.idPrd = 1;
	strcpy(p1.nombre, "Camiseta Nike");
	strcpy(p1.tipo, "Camiseta");
	strcpy(p1.descripcion, "Camiseta manga corta, roja, Nike");
	p1.precio = 16.50;


	p2.idPrd = 2;
	strcpy(p2.nombre, "Pantalon Vaquero");
	strcpy(p2.tipo, "Pantalon");
	strcpy(p2.descripcion, "Pantalon vaquero largo, azul, Levis");
	p2.precio = 22.50;


	p3.idPrd = 3;
	strcpy(p3.nombre, "Camiseta Adidas");
	strcpy(p3.tipo, "Camiseta");
	strcpy(p3.descripcion, "Camiseta manga corta, negra, Adidas");
	p3.precio = 14.50;


	p4.idPrd = 4;
	strcpy(p4.nombre, "Playeras Nike");
	strcpy(p4.tipo, "Playeras");
	strcpy(p4.descripcion, "AirForce, negras, Nike");
	p4.precio = 95.50;


	p5.idPrd = 5;
	strcpy(p5.nombre, "");
	strcpy(p5.tipo, "");
	strcpy(p5.descripcion, "");
	p5.precio = ;

	p6.idPrd = 6;
	strcpy(p6.nombre, "");
	strcpy(p6.tipo, "");
	strcpy(p6.descripcion, "");
	p6.precio = ;


	p7.idPrd = 7;
	strcpy(p7.nombre, "");
	strcpy(p7.tipo, "");
	strcpy(p7.descripcion, "");
	p7.precio = ;

	p8.idPrd = 8;
	strcpy(p8.nombre, "");
	strcpy(p8.tipo, "");
	strcpy(p8.descripcion, "");
	p8.precio = ;

	p9.ipPrd = 9;
	strcpy(p9.nombre, "");
	strcpy(p9.tipo, "");
	strcpy(p9.descripcion, "");
	p9.precio = ;

	Producto ps [] = {p1, p2, p3, p4, p5, p6, p7, p8};


	for (int i = 0; i< tamanyo; i++){
		*(productos + i) = ps[i];

	}

}

void listarProductos (Producto* productos, int tamanyo){


	for (int i = 0; i < tamanyo; i++){
		Producto p = *(productos + i);
		printf("%i. %s\n", i, p.nombre);
		printf("%s || %s\n", p.tipo, p.descripcion);
		printf("PRECIO: %f\n", p.precio);
		printf("-----------------------------------------------------\n");

	}
	printf("____________________________________________________\n");

	fflush(stdout);
}

void terminarPedido (Producto* cesta, int tamanyo){

	printf("____________CONFIRMACIÓN DEL PEDIDO_____________\n");
	printf("------------------------------------------------\n");

	float total = 0;

	for (int i = 0; i < tamanyo; i++){
		Producto p = *(cesta + i);
		printf("- %s\n", p.nombre);
		total = total + p.precio;
	}

	printf("_________________________________________________\n");
	printf("TOTAL:                               %f", total);

	fflush(stdout);
}

