#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float  salarioHora, numeroHoras;
	auto ir = [](float num) -> float {return num * 0.11;};
	auto inss = [](float num) -> float {return num * 0.08;};
	auto sindicato = [](float num) -> float {return num * 0.05;};
	auto salarioBruto = [&]() -> float {return  numeroHoras * salarioHora;};
	auto salarioLiquido = [](float salary, float a, float b, float c)-> float{
	    return salary - (a + b + c);
	};
	
	cout << "Qual o seu salario por hora? ";
	cin >> salarioHora;
	
	cout << "\nQuantas horas trabalha por mes? ";
	cin >> numeroHoras;
	
    cout << "\nImposto de Renda: " << ir(salarioBruto());
    cout << "\nInss: " << inss(salarioBruto());
    cout << "\nSindicato: " << sindicato(salarioBruto());
    cout << "\nTotal de descontos: " << ir(salarioBruto()) + inss(salarioBruto()) + sindicato(salarioBruto()) << endl;

	
	cout << "\nSalario liquido: " << salarioLiquido(salarioBruto(), ir(salarioBruto()), inss(salarioBruto()), sindicato(salarioBruto())) << endl;
	

	return 0;
}
