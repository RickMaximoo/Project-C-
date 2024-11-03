#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

// Fun��o para calcular o fatorial de um n�mero
long long calcularFatorial(int n) 
{
    if (n < 0) {
        cout << "O fatorial n�o est� definido para n�meros negativos." << endl;
        return -1; // Indica erro
    }

    long long fatorial = 1;
    for (int i = 2; i <= n; ++i)
    {
        fatorial *= i;
    }
    return fatorial;
}

int main() 
{
    setlocale(LC_ALL,"Portuguese");

    int numero;

    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    long long resultado = calcularFatorial(numero);

    if (resultado != -1) 
    {
        cout << "O fatorial de " << numero << " �: " << resultado << endl;
    }

    return 0;
}