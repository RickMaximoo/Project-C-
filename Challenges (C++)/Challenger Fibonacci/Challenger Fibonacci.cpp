#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "portuguese");
	int n = 10; 
	int t1 = 0, t2 = 1, nextTerm = 0;

	cout << "Os Primeiros " << n << " Termos da sequ�ncia de Fibonacci s�o: "; 

	for (int i = 0; i <= n; i++)
	{
		cout << t1 << ", "; 
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	cout << "\n";
	return 0; 
}