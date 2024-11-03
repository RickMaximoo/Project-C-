#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int mes;
    bool invalido = false;

    cout << "Digite o número do mês (1 a 12): ";
    cin >> mes;

    // Verifica se o mês está no intervalo válido (1 a 12)
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
        case 3: mesExtenso = "Março";
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
        default: mesExtenso = "Mês inválido!"; // Caso haja algum erro na entrada
        }
        cout << "O número " << mes << " equivale ao mês de " << mesExtenso << endl;
    }
    else {
        cout << "Mês inválido!!!" << endl;
    }

    return 0;
}