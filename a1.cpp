#include <iostream>
using namespace std;

class calculadora{
	private:
		float primero, segundo;
		comprobar();
	public:
		calculadora(){
			primero = 0;
			segundo = 0;
		};
		setnumeros(float a, float b);
		getprimero();
		getsegundo();
		sumar();
		restar();
		multiplicar();
		int dividir(float &resultado);
};

int calculadora :: dividir(float &resultado){
	resultado = true;
}

int main(){
	calculadora x, y;
	system("pause");
	return 0;
}
