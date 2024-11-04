#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h>
using namespace std;

enum class Categoria 
{
    Infantil,
    Juvenil,
    Adulto,
    Senior,
    IdadeInvalida
};

const int IDADE_MIN_INFANTIL = 7;
const int IDADE_MAX_INFANTIL = 12;
const int IDADE_MIN_JUVENIL = 13;
const int IDADE_MAX_JUVENIL = 17;
const int IDADE_MIN_ADULTO = 18;
const int IDADE_MAX_ADULTO = 49;

Categoria classificarCompetidor(int idade)
{
    if (idade >= IDADE_MIN_INFANTIL && idade <= IDADE_MAX_INFANTIL)
    {
        return Categoria::Infantil;
    }
    else if (idade >= IDADE_MIN_JUVENIL && idade <= IDADE_MAX_JUVENIL)
    {
        return Categoria::Juvenil;
    }
    else if (idade >= IDADE_MIN_ADULTO && idade <= IDADE_MAX_ADULTO)
    {
        return Categoria::Adulto;
    }
    else if (idade >= 50)
    {
        return Categoria::Senior;
    }
    else {
        return Categoria::IdadeInvalida;
    }
}

int main() 
{
    setlocale(LC_ALL, "portuguese");
    int idade;

    cout << "Digite uma idade válida (número inteiro positivo): ";
    while (!(cin >> idade) || idade < 0) 
    {
        cout << "Digite uma idade válida (número inteiro positivo): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Categoria categoria = classificarCompetidor(idade);

    switch (categoria)
    {
    case Categoria::Infantil:
        cout << "Categoria: Infantil" << endl;
        break;
    case Categoria::Juvenil:
        cout << "Categoria: Juvenil" << endl;
        break;
    case Categoria::Adulto:
        cout << "Categoria: Adulto" << endl;
        break;
    case Categoria::Senior:
        cout << "Categoria: Senior" << endl;
        break;
    default:
        cout << "Idade inválida" << endl;
    }

    return 0;
}
