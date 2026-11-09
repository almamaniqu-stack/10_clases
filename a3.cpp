#include <iostream>
using namespace std;

class Reloj{
	private:
    	int horas, minutos, segundos, bateria;
	public:
    	Reloj(){
    		horas = 0; minutos = 0; segundos = 0; bateria = 0;
		}
		bool ajustarHora(int h, int m, int s);
		int getHoras();
	    int getMinutos();
	    int getSegundos();
	    int getBateria();
	    void tic_tac();
    	void avanza(int h, int m, int s);
    	void atrasa(int h, int m, int s);
   		bool estaParado();
    	void recargaBateria(int b);
    	void horaFormato12h();
    	void horaFormato24h();
};

bool Reloj :: ajustarHora(int h, int m, int s){
	if(estaParado() == false && h >= 0 && h < 24 && (m >= 0 && m < 60 && s >= 0 && s < 60)){
		bateria = bateria;
		horas = h; 
		minutos = m; 
		segundos = s; 
		return true;
	}
		horas = 0; minutos = 0; segundos = 0; 
	return false;
}

void Reloj :: tic_tac(){
	if(bateria > 0){
		segundos += 1;
		bateria -= 1;
	}
}

int Reloj :: getHoras(){
	return horas;
}

int Reloj :: getMinutos(){
	return minutos;
}
int Reloj :: getSegundos(){
	return segundos;
}

int Reloj :: getBateria(){
	return bateria;
}

void Reloj :: avanza(int h, int m, int s){
	if(h >= 0 && h < 24 && (m >= 0 && m < 60 && s >= 0 && s < 60)){
		horas = h; minutos = m; segundos = s;
	}else{
		horas = 0; minutos = 0; segundos = 0; 
		cout << "Error. Valores Invalidos.\n";
	}
}
void Reloj :: atrasa(int h, int m, int s){
	if(h >= 0 && h < 24 && (m >= 0 && m < 60 && s >= 0 && s < 60)){
		horas = h; minutos = m; segundos = s;
	}else{
		horas = 0; minutos = 0; segundos = 0; 
		cout << "Error. Valores Invalidos.\n";
	}
}

bool Reloj :: estaParado(){
	if(bateria <= 0){
		return true;
	}
	return false;
}

void Reloj :: recargaBateria(int b){
	if(b > 0 && ((bateria + b) <= 100)){
		bateria = bateria + b;
	}else{
		cout << "Capacidad maxima, negativo o nula la cantidad de baterias.\n";
	}
}
void Reloj :: horaFormato12h(){
	if(horas % 12 >= 1 && horas < 24){
		cout << "Son las " << horas % 12  << ": " << minutos + (segundos / 60) << " PM.\n";
	}else{
		cout << "Son las " << horas << ": " << minutos + (segundos / 60) << " AM.\n";
	}
}
void Reloj :: horaFormato24h(){
	if(horas % 24 >= 1 && horas <= 12){
		cout << "Son las " << horas % 24 << " AM.\n";
	}else{
		cout << "Son las " << horas << " PM.\n";
	}
}

int main(){
	Reloj u;
	int ho, mi, se, ba, op, i = 0;
	cout << "----------------------------------------------------\n";
	cout << "                     RELOJERO\n";
	cout << "----------------------------------------------------\n";
	cout << "1. Consultar hora.\n";
	cout << "2. Ajustar hora.\n";
	cout << "3. Avanzar un segundo.\n";
	cout << "4. Adelantar o atrasar hora.\n";
	cout << "5. Recargar bateria.\n";
	cout << "6. Consultar bateria.\n";
	cout << "7. Salir.\n";
	cout << "----------------------------------------------------\n";
	do{
		cout << "Elije una opcion: "; cin >> op;
		switch(op){
			case 1: u.horaFormato12h(); break;
			case 2: cout << "Horas: "; cin >> ho; cout << "Minutos: "; cin >> mi; cout << "Segundos: "; cin >> se;
					if(u.ajustarHora(ho, mi, se) == true){
						cout << "HORA EXACTA: " << u.getHoras() << ": " << u.getMinutos() << ": " << u.getSegundos() << endl; 
					}else{
						cout << "Error. Bateria Insuficiente o Valores Invalidos. Valores iniciales iguales a (0).\n"; break;
					}
			case 3: u.tic_tac(); break;
			case 4: cout << "Horas: "; cin >> ho; cout << "Minutos: "; cin >> mi; cout << "Segundos: "; cin >> se;
					u.atrasa(ho, mi, se); break;
			case 5: cout << "Cantidad de Bateria: "; cin >> ba;
					u.recargaBateria(ba); break;
			case 6: cout << "Bateria: " << u.getBateria() << endl; break;
			case 7: i += 1; cout << "Saliendo del Sistema...\n"; break;
			default: cout << "Intentelo de Nuevo.\n"; 
		}
	}while(i != 1);
	return 0;
}
