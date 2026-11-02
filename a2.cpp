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
	color = "verde";
	return true;
}

bool Boligrafo :: recargar(int &unidades){
	color = "verde";
	return true;
}

void Boligrafo :: mostrarEstado(){
	color = "verde";
	return true;
}

int main(){
	
}
