#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int matriz[3][2];
	int contadorImpares = 0;

	cout << "Digite os elementos da matriz 3x2: " << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> matriz[i][j];
	}
	system("CLS");

	cout << "Matriz digitada: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < 3; i += 2)
	{
		for (int j = 0; j < 2; j++)
		{
			if (matriz[i][j] % 2 != 0)
			{
				contadorImpares++;
			}
		}
	}
	cout << "A quantidade de elementos impares nas linhas pares é: " << contadorImpares << "\n";
	return 0;
}