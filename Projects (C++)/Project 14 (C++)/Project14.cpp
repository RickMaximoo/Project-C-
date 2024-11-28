#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	const int linhas = 3; 
	const int colunas = 4; 
	int Matriz[linhas][colunas];
	int multiplosDe5 = 0;

	cout << "Dígite os elementos da matriz 3x4: " << "\n";
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			cin >> Matriz[i][j];
		}
	}

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (Matriz[i][j] % 5 == 0)
			{
				multiplosDe5++;
			}
		}
	}

	cout << "A quantidade de Múltiplos de 5 na matriz é: " << multiplosDe5 << "\n";
	return 0;
}