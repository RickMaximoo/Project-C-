#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

void desenharTriangulo(int linhas, char caractere)
{
    for (int i = 1; i <= linhas; i++)
    {
        // Ajustando o espa�amento para centralizar o tri�ngulo
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

    cout << "Quantas linhas deve ter o tri�ngulo? ";
    cin >> linhas;

    // Validar entrada
    while (linhas <= 0)
    {
        cout << "O n�mero de linhas deve ser positivo. Tente novamente: ";
        cin >> linhas;
    }

    cout << "Qual caractere voc� deseja usar para desenhar o tri�ngulo? ";
    cin >> caractere;

    desenharTriangulo(linhas, caractere);

    return 0;
}