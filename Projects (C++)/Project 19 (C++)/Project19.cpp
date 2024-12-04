#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int M1[2][2], M2[2][2];

	cout << "Digíte os elementos da matriz M1: \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> M1[i][j];
		}
	}
	cout << "Digíte os elementos da matriz M2: \n"; 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> M2[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		int temp = M1[i][i];
		M1[i][i] = M1[i][i];
		M2[i][i] = temp;
	}

	cout << "Diagonal principal de M1 após a troca: "; 
	for (int i = 0; i < 2; i++)
	{
		cout << M1[i][i] << " ";
	}
	cout << "\n"; 

	cout << "Diagonal principal de M2 após a troca: "; 
	for (int i = 0; i < 2; i++)
	{
		cout << M2[i][i] << " ";
	}
	cout << "\n";
	return 0; 

}