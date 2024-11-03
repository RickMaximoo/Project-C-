#include <iostream>
#include <iomanip>
#include <locale.h> // Biblioteca para setlocale

using namespace std;

void contarParesImpares(int limite, int& pares, int& impares) 
{
    for (int i = 1; i <= limite; i++)
    {
        if (i % 2 == 0) 
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int limite;

    cout << "Digite o limite superior: ";
    cin >> limite;

    // Verifica se o limite � v�lido
    if (limite <= 0)
    {
        cout << "O limite deve ser um n�mero positivo." << endl;
        return 1;
    }

    int pares = 0, impares = 0;
    contarParesImpares(limite, pares, impares);

    // Exibindo os resultados com formata��o
    cout << fixed << setprecision(0); // Sem casas decimais
    cout << "Quantidade de n�meros pares: " << setw(5) << pares << endl;
    cout << "Quantidade de n�meros �mpares: " << setw(5) << impares << endl;

    return 0;
}