#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int MatrizA[2][4] = { {1,2,3,4}, 5,6,7,1 };
	int MatrizB[2][4] = { {2,4,4,1}, 4,2,3,5 };
	int Resultado[2][4];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Resultado[i][j] = MatrizA[i][j] * MatrizB[i][j];
		}
	}
	cout << "Matriz Resultante: " << "\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)

		{
			cout << Resultado[i][j] << " "; 
		}
		cout << "\n";
	}
	return 0;
}