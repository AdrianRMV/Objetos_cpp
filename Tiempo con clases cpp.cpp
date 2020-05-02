#include <iostream>

using namespace std;



class Tiempo{
	private:
		int horas,minutos,segundos;
	
	public:
		Tiempo(int,int,int); //constructor1
		Tiempo(int);//contructor2
		
		void mostrarTiempo();
	
};

//construcor 1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos= _minutos;
	segundos= _segundos;
}

//constructor2
Tiempo::Tiempo(int tiempoSeg){

	horas = tiempoSeg/3600; //extraer horas
	tiempoSeg %= 3600;
	minutos = tiempoSeg / 60; //extraer minutos
	segundos = tiempoSeg % 60; //extraer segundos
}

void Tiempo::mostrarTiempo(){
	cout<<"El tiempo es: "<<horas<<":"<<minutos<<":"<<segundos<<":"<<endl;
}



int main(){
	
	Tiempo horaActual(16,23,30); 
	horaActual.mostrarTiempo();
	
	Tiempo unaHoraAtras(55410);
	unaHoraAtras.mostrarTiempo();
	
	
	return 0;
}
