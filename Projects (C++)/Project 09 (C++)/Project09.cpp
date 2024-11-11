#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10];
    int numero, tentativas = 0;
    bool acertou = false;

    cout << "Jogador 1, digite 10 n�meros inteiros:\n";
    for (int i = 0; i < 10; i++) 
    {
        cin >> vetor[i];
    }
    system("CLS");

    cout << "Jogador 2, voc� tem 3 tentativas para adivinhar um n�mero:\n";
    for (int i = 0; i < 3 && !acertou; i++) 
    {
        cout << "Tentativa " << i + 1 << ": ";
        cin >> numero;
        tentativas++;

        for (int j = 0; j < 10; j++)
        {
            if (vetor[j] == numero) 
            {
                cout << "Parab�ns! Este n�mero est� na posi��o " << j << " do vetor! Voc� usou " << tentativas << " tentativas.\n";
                acertou = true;
                break;
            }
        }
    }

    if (!acertou) 
    {
        cout << "Que pena! Voc� n�o acertou...\n";
    }
    system("PAUSE");
    return 0;
}