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
		bool setColor(string &color);
		bool escribir(int &unidades);
		bool recargar(int &unidades);
		void mostrarEstado();
};

int Boligrafo :: getTinta(){
	return tinta;
}

string Boligrafo :: getColor(){
	return color;
}

bool Boligrafo :: setColor(string &color){
	color = color;
	return true;
}

bool Boligrafo :: escribir(int &unidades){
	if(unidades < tinta && unidades >= 0 && unidades <= 100){
		tinta = tinta - unidades;
		return true;
	}
	return false;
}

bool Boligrafo :: recargar(int &unidades){
	if(unidades  tinta && unidades >= 0 && unidades <= 100){
		tinta = tinta - unidades;
		return true;
	}
	return false;
}

void Boligrafo :: mostrarEstado(){
	color = "verde";
	return true;
}

int main(){
	
}
