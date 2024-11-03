#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

// Função para calcular o fatorial de um número
long long calcularFatorial(int n) 
{
    if (n < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
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

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    long long resultado = calcularFatorial(numero);

    if (resultado != -1) 
    {
        cout << "O fatorial de " << numero << " é: " << resultado << endl;
    }

    return 0;
}