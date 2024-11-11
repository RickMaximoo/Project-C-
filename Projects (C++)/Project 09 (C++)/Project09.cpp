#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10];
    int numero, tentativas = 0;
    bool acertou = false;

    cout << "Jogador 1, digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) 
    {
        cin >> vetor[i];
    }
    system("CLS");

    cout << "Jogador 2, você tem 3 tentativas para adivinhar um número:\n";
    for (int i = 0; i < 3 && !acertou; i++) 
    {
        cout << "Tentativa " << i + 1 << ": ";
        cin >> numero;
        tentativas++;

        for (int j = 0; j < 10; j++)
        {
            if (vetor[j] == numero) 
            {
                cout << "Parabéns! Este número está na posição " << j << " do vetor! Você usou " << tentativas << " tentativas.\n";
                acertou = true;
                break;
            }
        }
    }

    if (!acertou) 
    {
        cout << "Que pena! Você não acertou...\n";
    }
    system("PAUSE");
    return 0;
}