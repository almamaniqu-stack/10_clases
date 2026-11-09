#include <iostream>
using namespace std;

class Boligrafo{
	private:
		int tinta;
		string color;
	public:
		Boligrafo(){
			tinta = 100;
			color = "azul";
		};
		int getTinta();
		string getColor();
		bool setColor(string color);
		bool escribir(int unidades);
		bool recargar(int unidades);
		void mostrarEstado();
};

int Boligrafo :: getTinta(){
	return tinta;
}

string Boligrafo :: getColor(){
	return color;
}

bool Boligrafo :: setColor(string Color){
	if(Color == "azul" || Color == "verde" || Color == "negro" || Color == "rojo"){
		color = Color;
		return true;
	}
	return false;
}

bool Boligrafo :: escribir(int unidades){
	if(unidades < tinta && unidades >= 0 && unidades <= 100){
		tinta = tinta - unidades;
		return true;
	}
	return false;
}

bool Boligrafo :: recargar(int unidades){
	if((unidades + tinta) <= 100){
		tinta = tinta + unidades;
		return true;
	}
	return false;
}

void Boligrafo :: mostrarEstado(){
	cout << "Tinta sobrante: " << tinta << endl;
	cout << "Color de Tinta actual: " << color << endl;
}

int main(){
	Boligrafo k;
	int t, op, i = 0;
	string c;
	cout << "------------------------------------------\n";
	cout << "           ESCRITURA A TINTA\n";
	cout << "------------------------------------------\n";
	cout << "1. Obtener Tinta." << endl;
	cout << "2. Obtener Color." << endl;
	cout << "3. Escribir." << endl;
	cout << "4. Cambiar Color (azul, verde, negro, rojo)." << endl;
	cout << "5. Recargar tinta." << endl;
	cout << "6. Mostrar datos." << endl;
	cout << "7. Salir." << endl;
	cout << "------------------------------------------\n";
	do{
		cout << "Elija una opcion: ";
		cin >> op;
		switch(op){
			case 1: cout << "Tinta: " << k.getTinta() << endl; break;
			case 2: cout << "Color: " << k.getColor() << endl; break;
			case 3: cout << "\nTinta empleada:\n"; cin >> t; 
					if(k.escribir(t) == true){
						cout << "Tinta sobrante: " << k.getTinta() << endl;
					}else{
						cout << "Tinta insuficiente.\n";
					}
					break;
			case 4: cout << "Elija un color:\n"; cin.ignore(); getline(cin, c);
					if(k.setColor(c) == true){
						cout << "Color actual: " << k.getColor() << endl;
					}else{
						cout << "Color no Disponible.\n";
					}
					break;
			case 5: cout << "Cantidad:\n"; cin >> t;
					if(k.recargar(t) == true){
						cout << "Tinta actual: " << k.getTinta() << endl;
					}else{
						cout << "Capacidad de Almancenamiento Insuficiente.\n";
					}
					break;
			case 6: cout << "--------------------------------------------\n"; k.mostrarEstado(); break;
			case 7: i += 1;
					cout << "Saliendo del Sistema...\n"; break;
			default: cout << "Intentelo nuevamente.\n"; break; 
		}
	}while(i != 1);
	return 0;
}
