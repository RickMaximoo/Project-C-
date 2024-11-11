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
        cout << "Digite o sal�rio do funcion�rio: ";
        cin >> salario;

        while (salario < 0)
        {
            cout << "Sal�rio inv�lido. Digite novamente: ";
            cin >> salario;
        }

        cout << "Digite o sexo do funcion�rio (M/F): ";
        cin >> sexo;

        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') 
        {
            cout << "Sexo inv�lido. Digite 'M' para masculino ou 'F' para feminino: ";
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
            cout << "Op��o inv�lida. Digite 'S' para sim ou 'N' para n�o: ";
            cin >> continuar;
        }

    } 
    while (continuar == 'S' || continuar == 's');

    cout << "Total de sal�rios pagos aos homens: " << totalHomens << endl;
    cout << "Total de sal�rios pagos �s mulheres: " << totalMulheres << endl;

    return 0;
}

