#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int resultados[20];

    int contadores[3] = { 0, 0, 0 };
    for (int i = 0; i < 20; i++)
    {
        resultados[i] = rand() % 6 + 1;

        switch (resultados[i])
        {
        case 1:
            contadores[0]++;
            break;
        case 3:
            contadores[1]++;
            break;
        case 5:
            contadores[2]++;
            break;
        }
    }
    cout << "Frequência das faces ímpares:\n";
    cout << "Face 1: " << contadores[0] << " vezes\n";
    cout << "Face 3: " << contadores[1] << " vezes\n";
    cout << "Face 5: " << contadores[2] << " vezes\n";

    return 0;
}