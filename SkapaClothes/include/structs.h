#ifndef STRUCTS_H
#define STRUCTS_H


typedef struct{
	int idPrenda;
	char nombre[30];
	char tipo[40];
	char descripcion[150];
	float precio;
}Prenda;

typedef struct{
	int idUsuario;
	int idRecibo;
	char direccion[10];
	int codigo[10];
	int fecha[10];
	Prenda* prendas;
	float precio[10];
}Recibo;

typedef struct{
	char correo[40];
	char nombre[10];
	char contrasenya [10];
	int numero [9];
	Ticket* tickets;

}Usuario;


//login//
void imprimirArray (Usuario*usuarios, int tamanyo);
int comprobarUsuario (char name [10], char pass [10], Usuario* usuarios, int tamanyo);
int login(Usuario* usuarios);

//registry//
void registry (Usuario* usuarios, int posicion);

//contransenyaOlvidada
void contrasenyaOlvidada(Usuario* usuarios);

//funcionesProductos//
void volcarProductos(Prenda *prendas, int tamanyo);
void listarProductos (Prenda *prendas, int tamanyo);
void meterEnCesta (Prenda p, Prenda* carrito, int *posicion);
void terminarPedido (Prenda* carrito, int tamanyo);

//help//
void help (void);

#endif // STRUCTS_H
