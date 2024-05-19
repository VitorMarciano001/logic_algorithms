#include <iostream>
using namespace std;
//math 
// cmath

int main(int argc, char** argv) {
	int num1, num2;
	float real, result;
	
	
	cout << "Insira o primeiro numero: ";
	cin >> num1;
	
	cout << "Insira o segundo numero: ";
	cin >> num2;
	
	cout << "Insira o numero real: ";
	cin >> real;
	
	result = (num1 * num1) + (num2 / 2);
	cout << "O produto do dobro do primeiro mais a metade do segundo e: ";
	cout << result;
	
	
	result = (num1 * num1 * num1) + real;
	cout << "\nA soma do triplo do primeiro com o terceiro e " << result;
	
	
	result = (real * real * real);
	cout << "\nO terceiro elevado ao cubo e " << result;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
