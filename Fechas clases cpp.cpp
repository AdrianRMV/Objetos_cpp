#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
	private: //atributos
		int dia,mes,anio;

	public:
		Fecha (int,int,int);//Contructor 1
		Fecha (long);//Constructor2
		void mostrarFecha();
};

Fecha::Fecha(int _dia, int _mes, int _anio){//Constructor1
	anio= _anio;
	mes= _mes;
	dia= _dia;
}

Fecha::Fecha(long fecha){
	anio = int (fecha/10000); //extraer anio
	mes = int ((fecha-anio*10000)/100); //extraer mes
	dia = int (fecha-anio*10000-mes*100); //extraer dia
}

void Fecha::mostrarFecha(){
	cout << "La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	
	Fecha hoy (01,05,2020);
	Fecha ayer (31,04,2020);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	
	
	return 0;
}
