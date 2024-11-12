#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    string texto = "A B C D E F G H I J K L M N O P Q R S T";
    int tamanho = texto.length();
    string TextoInvertido;
    string numeros = "0 1 2 3 4 5 6 7 8 9";
    int tamanho2 = numeros.length();
    string numerosInvertidos;

    for (int i = tamanho - 1; i >= 0; i--)
    {
        TextoInvertido += texto[i];
    }
    for (int i = tamanho2 - 1; i >= 0; i--)
    {
        numerosInvertidos += numeros[i];
    }
    cout << "********************************************************\n";
    cout << "Texto Original: " << texto << "\n";
    cout << "Texto Invertido: " << TextoInvertido << "\n";
    cout << "                                                          \n";
    cout << "Números Originais: " << numeros << "\n";
    cout << "Números Invertidos: " << numerosInvertidos << "\n";
    cout << "********************************************************\n";

    return 0;
}