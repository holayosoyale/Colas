#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/* es una estructura de datos se caracteriza por ser una
secuencia de elementos agrega elementos al final y salen elementos
al inicio 
fifo= primero que llega primero en salir */
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void menu();
void insertarCola (Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(int argc, char** argv) {
	menu();
	return 0;
}
void menu(){
	int opcion;
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	do{
		cout<<"\t---:MENU:---\n";
		cout<<" 1. Insertar un caracter a una cola "<<endl;
		cout<<" 2. Mostrar todos los elementos de la cola "<<endl;
		cout<<" 3. Salir"<<endl;
		cout<<"    Elige tu opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				int dato;
				cout<<"\n- Dijite un numero: ";
				cin>>dato;
				insertarCola(frente, fin, dato);
				system("pause");
				break;
			case 2:
				cout<<" -Mostrando los elementos de la cola: ";
				while(frente != NULL){
				suprimirCola(frente,fin,dato);
		
				if(frente != NULL){
				cout<<dato<< " , ";
				}else{
				cout<<dato<<" . ";
				}
			}
				system("pause");
				break;
			case 3:
				break;
			}
			system("cls");
	}while (opcion!=3);
}
//Funcion insertar cola
void insertarCola (Nodo *&frente,Nodo *&fin, int n){
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	if(cola_vacia(frente)){
		frente= nuevo_nodo;
	}else{
		fin ->siguiente = nuevo_nodo;
	}
	fin= nuevo_nodo;
	cout<<" \n Elemento "<<n<< " insertado a cola correctamente \n\n";
}
//funcion para verificar que la cola esta vacia
bool cola_vacia(Nodo *frente){
	return (frente ==NULL)? true : false;
	//if(frentee==NULL){
	//	return true;
	//}else {
	//	return false;
	//}
}
//Funcion para eliminar Nodo
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){

	n=frente->dato;
	Nodo *aux=frente;
	
	if (frente==fin){
		frente=NULL;
		fin= NULL;
	}else {
		frente = frente->siguiente;
	}
	delete aux;
}
