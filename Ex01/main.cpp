#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	float salarioFinal, salarioHora;
	int horaMes;
	
	
	cout << "Quanto voce ganha por hora? ";
	cin >> salarioHora;
	
	cout << "Quantas horas voce trabalha por mes? ";
	cin >> horaMes;
	
	
	salarioFinal = horaMes * salarioHora;
	cout <<"Seu salario final e de: " << salarioFinal;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
