#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float L1, L2, L3;

	cout << "Qual o valor do PRIMEIRO LADO: ";
	cin >> L1;
	cout << "Qual o valor do SEGUNDO LADO: ";
	cin >> L2;
	cout << "Qual o valor do TERCEIRO LADO: ";
	cin >> L3;

	if (L1 == L2 && L2 == L3)
	{
		cout << "Isto � um tri�ngulo equil�tero, porque todos os lados s�o iguais";
	}
	else if (L1 == L2 || L2 == L3 || L1 == L3)
	{
		cout << "� um tri�ngulo is�sceles, porque apresenta dois lados iguais";
	}
	else
		cout << "� um tri�ngulo Escaleno, porque todos os lados s�o diferentes.";
}
