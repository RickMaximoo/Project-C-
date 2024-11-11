#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    double salario, totalHomens = 0, totalMulheres = 0;
    char sexo, continuar;

    do 
    {
        cout << "Digite o salário do funcionário: ";
        cin >> salario;

        while (salario < 0)
        {
            cout << "Salário inválido. Digite novamente: ";
            cin >> salario;
        }

        cout << "Digite o sexo do funcionário (M/F): ";
        cin >> sexo;

        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') 
        {
            cout << "Sexo inválido. Digite 'M' para masculino ou 'F' para feminino: ";
            cin >> sexo;
        }

        if (sexo == 'M' || sexo == 'm')
        {
            totalHomens += salario;
        }
        else
        {
            totalMulheres += salario;
        }

        cout << "Deseja continuar (S/N)? ";
        cin >> continuar;

        while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n') 
        {
            cout << "Opção inválida. Digite 'S' para sim ou 'N' para não: ";
            cin >> continuar;
        }

    } 
    while (continuar == 'S' || continuar == 's');

    cout << "Total de salários pagos aos homens: " << totalHomens << endl;
    cout << "Total de salários pagos às mulheres: " << totalMulheres << endl;

    return 0;
}

