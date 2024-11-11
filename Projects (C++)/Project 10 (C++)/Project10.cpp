#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, impares = 0;
	const int jogadas = 20;
	int numeros[jogadas];

	for (i = 0; i < jogadas; i++)
	{
		do
		{
			cout << "Qual o " << i + 1 << "º número que caiu (1 a 6)? ";
			cin >> numeros[i];

			if (numeros[i] < 1 || numeros[i] > 6)
			{
				cout << "Número inválido! Digite um número de 1 a 6." << endl;
			}

		} while (numeros[i] < 1 || numeros[i] > 6);

		if (numeros[i] % 2 != 0)
		{
			impares++;
		}
	}

	cout << "Tiveram " << impares << " números ímpares nas 20 jogadas." << endl;

	return 0;
}