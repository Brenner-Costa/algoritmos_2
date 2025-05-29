#include <iostream>
using namespace std;

void troca(int *a, int *b) {
    cout << "Trocando os valores..." << endl;
    int val = *a;
    *a = *b;
    *b = val;
}

int main()
{
    /*
        Implemente a funcao troca que troca o conteudo de duas variaveis inteiras a e b.
        Faca um programa que teste a funcao implementada.
        Prototipo:
        void troca(int *a, int *b);   
    */

    int a = 0, b = 0;
    cout << "Digite um valor para A: ";
    cin >> a;

    cout << "Digite um valor para B: ";
    cin >> b;

    troca(&a, &b);

    cout << "Valor de A: " << a << endl;
    cout << "Valor de B: " << b << endl;


}