#include <iostream>
#include <iomanip>
#include <locale.h> 

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
    setlocale(LC_ALL, "Portuguese");

    int limite;

    cout << "Digite o limite superior: ";
    cin >> limite;


    if (limite <= 0)
    {
        cout << "O limite deve ser um n�mero positivo." << endl;
        return 1;
    }

    int pares = 0, impares = 0;
    contarParesImpares(limite, pares, impares);


    cout << fixed << setprecision(0);
    cout << "Quantidade de n�meros pares: " << setw(5) << pares << endl;
    cout << "Quantidade de n�meros �mpares: " << setw(5) << impares << endl;

    return 0;
}