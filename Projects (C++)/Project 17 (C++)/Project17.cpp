#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int matriz[4][4], transporta[4][4];

	cout << "Digite os elementos da matriz 4x4: \n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matriz[i][j];

		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			transporta[j][i] = matriz[i][j];
		}
	}

	cout << "\nMatriz Transporta: \n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << transporta[i][j];
		}
		cout << "\n";
	}

	return 0;
}