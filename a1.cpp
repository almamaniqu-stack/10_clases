#include <iostream>
using namespace std;

class calculadora{
	private:
		float primero, segundo, comprobar();
	public:
		calculadora(){
			primero = 0;
			segundo = 0;
		};
		void setnumeros(float a, float b);
		float getprimero();
		float getsegundo();
		float sumar();
		float restar();
		float multiplicar();
		bool dividir(float &resultado);
};

void calculadora :: setnumeros(float num1, float num2){
	cin >> num1 >> num2;
	primero = num1;
	segundo = num2;
}

float calculadora :: getprimero(){
	return primero;
}

float calculadora :: getsegundo(){
	return segundo;
}

float calculadora :: sumar(){
	return primero + segundo;
}

float calculadora :: restar(){
	return primero - segundo;
}

float calculadora :: multiplicar(){
	return primero * segundo;
}

bool calculadora::dividir(float &resultado){
    if (!comprobar()){
        return false;
    }
    resultado = primero / segundo;
    return true;
}

float calculadora :: comprobar(){
	if(segundo == 0){
		return false;
	}else{
		return true;
	}
}

int main(){
	calculadora h;
	float x, y, r = 0.00;
	int casio;
	cout << "------------------------------------------\n";
	cout << "	CALCULADORA BASICA (dos numeros)\n";
	cout << "------------------------------------------\n";
	cout << "1.\tSumatoria.\n";
	cout << "2.\tResta.\n";
	cout << "3.\tMultiplicacion.\n";
	cout << "4.\tDivision.\n";
	cout << "5.\tNumero 1.\n";
	cout << "6.\tNumero 2.\n";
	cout << "7.\tIngresar numeros.\n";
	cout << "8.\tSalir.\n";
	do{
		cout << "\n------------------------------------------\n";
		cout << "ELIGE UNA OPCION: ";
		cin >> casio;
		cout << "\n------------------------------------------\n";
		switch(casio){
			case 1: cout << "La suma es: " << h.sumar() << endl; break;
			case 2: cout << "La resta es: " << h.restar() << endl; break;
			case 3: cout << "La multiplicacion es: " << h.multiplicar() << endl; break;
			case 4: cout << h.dividir(r) << endl; break;
			case 5: cout << "El numero 1 es: " << h.getprimero() << endl; break;
			case 6: cout << "El numero 2 es: " << h.getsegundo() << endl; break;
			case 7: h.setnumeros(x, y); break;
			case 8: cout << "\nSaliendo del sistema...\n";break;
			default: cout << "Seleccione otra opcion o salga del sistema." << endl; break;
		}
	}while(casio != 8);
	return 0;
}
