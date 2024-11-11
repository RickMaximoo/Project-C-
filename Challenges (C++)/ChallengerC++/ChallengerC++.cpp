#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    const int MINUTOS_POR_DIA = 1440;
    const int MINUTOS_POR_CIGARRO = 10;

    int cigarrosPorDia, anosFumando;

    do 
    {
        cout << "Digite a quantidade de cigarros fumados por dia: ";
        cin >> cigarrosPorDia;
    } while (cigarrosPorDia <= 0);

    do
    {
        cout << "Digite há quantos anos você fuma: ";
        cin >> anosFumando;
    } while (anosFumando <= 0);

    int minutosPerdidos = cigarrosPorDia * anosFumando * 365 * MINUTOS_POR_CIGARRO;
    double diasPerdidos = static_cast<double>(minutosPerdidos) / MINUTOS_POR_DIA;

    cout << fixed << setprecision(2);
    cout << "Você perdeu aproximadamente " << diasPerdidos << " dias de vida devido ao fumo." << endl;
    cout << "Isso equivale a cerca de " << diasPerdidos / 365 << " anos." << endl;

    return 0;
}