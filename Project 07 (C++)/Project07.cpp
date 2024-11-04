#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Digite a quantidade de termos da sequência de Fibonacci: ";
    cin >> n;
    cout << "Sequência de Fibonacci: " << t1 << ", " << t2 << ", ";

    // Aqui temos um Loop para calcular e imprimir os demais termos
    for (int i = 3; i <= n; ++i) {
      
        nextTerm = t1 + t2;

        cout << nextTerm << ", ";

        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}