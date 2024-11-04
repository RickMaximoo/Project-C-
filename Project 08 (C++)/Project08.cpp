#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo, quantidade;
    double total = 0.0;
    char opcao;

    do
    {
        cout << "*** Card�pio ***\n";
        cout << "100 - Hamb�rguer - R$5,50\n";
        cout << "101 - Cachorro-quente - R$4,50\n";
        cout << "102 - Milk-shake - R$7,00\n";
        cout << "103 - Pizza brotinho - R$8,00\n";
        cout << "104 - Cheeseburguer - R$8,50\n";

        cout << "Informe o c�digo do seu pedido: ";
        cin >> codigo;

        switch (codigo)
        {
        case 100:
            cout << "Quantidade de hamb�rgueres: ";
            cin >> quantidade;
            total += quantidade * 5.50;
            break;
        case 101:
            cout << "Quantidade de Cachorro-quente: ";
            cin >> quantidade;
            total += quantidade * 4.50;
            break;
        case 102:
            cout << "Quantidade de Milk-Shake: ";
            cin >> quantidade;
            total += quantidade * 7.00;
            break;
        case 103:
            cout << "Quantidade de Pizza Brotinho: ";
            cin >> quantidade;
            total += quantidade * 8.00;
            break;
        case 104:
            cout << "Quantidade de Cheeseburguer: ";
            cin >> quantidade;
            total += quantidade * 8.50;
            break;
        default:
            cout << "C�digo inv�lido!\n";
        }

        cout << "Deseja adicionar mais algum item? (S/N): ";
        cin >> opcao;
    } while (opcao == 'S' || opcao == 's');

    cout << fixed << setprecision(2);
    cout << "O valor total do seu pedido �: R$" << total << endl;

    return 0;
}
