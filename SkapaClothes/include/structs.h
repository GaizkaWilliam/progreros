#ifndef structs_h_
#define structs_h_

typedef struct{
	int idPrd;
	char nombre[30];
	char tipo[40];
	char descripcion[150];
	float precio;
}Producto;

typedef struct{
	int idUsuario;
	int idTicket;
	char direccion[10];
	int codigo[10];
	int fecha[10];
	Producto* productos;
	float precio[10];
}Ticket;

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
void volcarProductos(Producto *productos, int tamanyo);
void listarProductos (Producto *productos, int tamanyo);
void meterEnCesta (Producto p, Producto* cesta, int *posicion);
void terminarPedido (Producto* cesta, int tamanyo);

//help//
void help (void);



#endif /* STRUCTS_H_ */
