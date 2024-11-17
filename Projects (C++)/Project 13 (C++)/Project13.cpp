#include <iostream>
#include <vector>
#include <cctype>
#include <locale.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "portuguese");
	vector<char> gabarito = { 'A', 'C', 'C', 'B', 'E', 'A', 'E', 'C', 'A', 'E', 'A', 'A', 'C', 'D', 'A' };
	int numAlunos;
	cout << "Digite o número de alunos: ";
	cin >> numAlunos;

	for (int i = 0; i < numAlunos; i++)
	{
		vector<char> prova(15);

		cout << "Informe as suas 15 questões,Aluno " << i + 1 << ": ";
		int j = 0;

		while (j < 15)
		{
			char resposta;
			cin >> resposta;
			resposta = toupper(resposta);
			if (resposta >= 'A' && resposta <= 'E')
			{
				prova[j] = resposta;
				j++;
			}
			else
			{
				cout << "Resposta inválida.Digite novamente: ";
			}
		}
		int acertos = 0;
		for (int j = 0; j < 15; j++)
		{
			if (prova[j] == gabarito[j])
			{
				acertos++;
			}
		}
		if (acertos >= 11)
		{
			cout << "\nAluno Aprovado!!\n";
		}
		else
		{
			cout << "\nAluno reprovado!!\n";
		}
		cout << "********************************************************\n";
		cout << "O aluno " << i + 1 << " teve " << acertos << " acertos." << endl;
		cout << "********************************************************\n";
		cout << "                                                         \n";
	}
	system("PAUSE");
	return 0;
}
// Implementei um sistema que acima de 70% de acerto mostra se o aluno foi ou não aprovado! 