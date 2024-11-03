#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int mes;
    bool invalido = false;

    cout << "Digite o n�mero do m�s (1 a 12): ";
    cin >> mes;

    // Verifica se o m�s est� no intervalo v�lido (1 a 12)
    if (mes < 1 || mes > 12)
    {
        invalido = true;
    }

    if (!invalido)
    {
        string mesExtenso;
        switch (mes)
        {
        case 1: mesExtenso = "Janeiro";
            break;
        case 2: mesExtenso = "Fevereiro";
            break;
        case 3: mesExtenso = "Mar�o";
            break;
        case 4: mesExtenso = "Abril";
            break;
        case 5:mesExtenso = "Maio";
            break;
        case 6: mesExtenso = "Junho";
            break;
        case 7: mesExtenso = "Julho";
            break;
        case 8: mesExtenso = "Agosto";
            break;
        case 9: mesExtenso = "Setembro";
            break;
        case 10: mesExtenso = "Outubro";
            break;
        case 11: mesExtenso = "Novembro";
            break;
        case 12: mesExtenso = "Dezembro"; break;
        default: mesExtenso = "M�s inv�lido!"; // Caso haja algum erro na entrada
        }
        cout << "O n�mero " << mes << " equivale ao m�s de " << mesExtenso << endl;
    }
    else {
        cout << "M�s inv�lido!!!" << endl;
    }

    return 0;
}