#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int jogadorA[10], jogadorB[10], vitoriasA = 0, vitoriasB = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "\*************************\n";
		cout << "          RODADA " << i + 1 << "\n";
		cout << "\*************************\n";

		cout << "Jogador A(PAR): ";
		cin >> jogadorA[i];
		cout << "Jogador B(ÍMPAR): ";
		cin >> jogadorB[i];

		int soma = jogadorA[i] + jogadorB[i];
		if (soma % 2 == 0)
		{
			cout << "___________________________\n";
			cout << "Jogador A venceu!" << "\n";
			cout << "___________________________\n";
			vitoriasA++;
		}
		else
		{
			cout << "___________________________\n";
			cout << "Jogador B venceu!" << "\n";
			cout << "___________________________\n";
			vitoriasB++;
		}
	}
	system("CLS");
	cout << "____________________________________\n";
	cout << "\nResultados Finais: " << "\n";
	cout << "Jogador A: " << vitoriasA << " vitórias!" << "\n";
	cout << "Jogador B: " << vitoriasB << " vitórias" << "\n";
	cout << "____________________________________\n";
	return 0;
}