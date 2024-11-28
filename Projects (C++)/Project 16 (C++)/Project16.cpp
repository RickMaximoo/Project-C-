#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Matriz[4][4];

	cout << "Digite os elementos da Matriz 4x4; " << "\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> Matriz[i][j];
		}
	}
	int linhadesejada;
	cout << "Digite o numero da linha (0 a 3) que deseja visualizar: ";
	cin >> linhadesejada;

	if (linhadesejada >= 0 && linhadesejada < 4)
	{
		cout << "A linha " << linhadesejada << " é: ";
		for (int j = 0; j < 4; j++)
		{
			cout << Matriz[linhadesejada][j] << " ";
		}
		cout << "\n";
	}
	else
	{
		cout << "Linha inválida. Por favor, digite um número entre 0 e 3!";
	}
	return 0;
}