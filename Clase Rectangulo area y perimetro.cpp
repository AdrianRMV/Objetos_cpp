#include <iostream>

using namespace std;


class Rectangulo{
	private://atributos
		float largo;
		float ancho;
	public://metodos
		Rectangulo (float,float); //constructor
		void perimetro();
		void area();
	
};

Rectangulo::Rectangulo(float _largo, float _ancho){
	largo = _largo;
	ancho = _ancho;
	
}

void Rectangulo::perimetro(){
	float _perimetro;
	
	_perimetro = (2*largo ) + (2*ancho);
	
	cout << "El perimetro es: "<<_perimetro<<endl;
}

void Rectangulo::area(){
	float _area;
	
	_area = largo * ancho;
	
	cout << "El area de tu rectangulo es: "<<_area<<endl;
}
int main (){
	
	Rectangulo r1 (20,12);
	Rectangulo r2 (17,10);
	
	
	r1.perimetro();
	r1.area();
	
	
	
	
	
	return 0;
}
