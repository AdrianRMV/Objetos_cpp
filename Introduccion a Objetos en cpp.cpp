#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
	private://ATRIBUTOS
		int edad;
		string nombre;
	public://METODOS
		Persona(int,string);//Constructor
		void leer();
		void correr();
			
};

//CONSTRUCTOR, NOS SIRVE PARA INICIALIZAR LOS ATRIBUTOS
Persona::Persona(int _edad, string _nombre){
	edad =_edad;
	nombre=_nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<< " y estoy leyendo un libro"<<endl;
}
void Persona::correr(){
	cout << "Soy "<<nombre<< " y estoy corriendo una maraton y tengo "<<edad<<endl;
	
}
int main(){
	
	Persona p1 = Persona(18,"Adrian");
	
	Persona p2(18,"Fabian");
	
	Persona p3 (21,"Juan");
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	return 0;
}
