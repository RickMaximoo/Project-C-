#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matrizA[2][2], matrizB[2][2], resultado[2][2];

    cout << "Digite os valores da matriz A (linha por linha):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) 
        {
           while (!(cin >> matrizA[i][j]));
           {
               cout << "Entrada Inv�lida! Digite um n�mero: ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max()), '\n';
           }
        }
    }
    cout << "Digite os valores da matriz B (linha por linha):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
          {
           while (!(cin >> matrizB[i][j]));
              {
               cout << "Entrada Inv�lida! Digite um n�mero: ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max()), '\n';
              }
           }
    }
    for (int i = 0; i < 2; i++)
        {
        for (int j = 0; j < 2; j++)
             {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
             }
          }   
    cout << "A matriz resultante da soma �: " << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
           {
            cout << resultado[i][j] << " ";
           }
        cout << endl;
    }

    return 0;
}