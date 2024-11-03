#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

void desenharTriangulo(int linhas, char caractere)
{
    for (int i = 1; i <= linhas; i++)
    {
        // Ajustando o espaçamento para centralizar o triângulo
        for (int j = 1; j <= linhas - i; j++)
        {
            cout << " ";
        }
        // Imprimindo os caracteres
        for (int k = 1; k <= i; k++)
        {
            cout << caractere;
        }
        cout << endl;
    }
}

int main() 
{
    setlocale(LC_ALL,"Portuguese");

    int linhas;
    char caractere;

    cout << "Quantas linhas deve ter o triângulo? ";
    cin >> linhas;

    // Validar entrada
    while (linhas <= 0)
    {
        cout << "O número de linhas deve ser positivo. Tente novamente: ";
        cin >> linhas;
    }

    cout << "Qual caractere você deseja usar para desenhar o triângulo? ";
    cin >> caractere;

    desenharTriangulo(linhas, caractere);

    return 0;
}