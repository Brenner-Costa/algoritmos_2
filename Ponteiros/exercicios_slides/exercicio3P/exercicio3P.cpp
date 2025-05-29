#include <iostream>
using namespace std;

int main()
{
    /*
        Dadas as declaracoes e inicializacoes abaixo:
        int x = 23;
        float y = 9.7;
        Faca o que se pede nos itens a seguir:
        ▶ Declare e inicialize um ponteiro pt1 com o endereco de x.
        ▶ Incremente o valor de x de forma indireta.
        ▶ Declare um segundo ponteiro (pt2) e faca-o apontar para y.
        ▶ Imprima a soma dos valores de x e y, sem usar as variaveis x e y.
        ▶ Imprima o endereco da posicao de memoria localizada 16 bytes apos o endereco de x.
        ▶ Declare um terceiro ponteiro (pt3) e faca-o apontar para o ponteiro de y.
        ▶ Usando pt3, mova pt2 para a proxima posicao de memoria.
        ▶ Usando apenas pt3, imprima os enderecos de pt3 e pt2.
    */

    int x = 23;
    float y = 9.7;

    //▶ Declare e inicialize um ponteiro pt1 com o endereco de x.
    int *pt1 = &x;

    //▶ Incremente o valor de x de forma indireta.
    *pt1 = *pt1 + 10;

    //▶ Declare um segundo ponteiro (pt2) e faca-o apontar para y.
    float *pt2 = &y;
    
    // ▶ Imprima a soma dos valores de x e y, sem usar as variaveis x e y.
    cout << "Soma de X e Y: " << *pt1 + *pt2 << endl;

    //▶ Imprima o endereco da posicao de memoria localizada 16 bytes apos o endereco de x.
    cout << "Endereco 16 Bytes apos o endereco de X: " << pt1+4 << endl;

    //▶ Declare um terceiro ponteiro (pt3) e faca-o apontar para o ponteiro de y.
    float* *pt3 = &pt2;

    //▶ Usando pt3, mova pt2 para a proxima posicao de memoria.
    cout << "Endereco de pt2: " << &pt2 << endl;
    cout << "Endereco armazenado em pt3: " << pt3 << endl;
    cout << "Movendo pt2 atraves de pt3: " << pt3+1 << endl;

    //▶ Usando apenas pt3, imprima os enderecos de pt3 e pt2.
    cout << "Endereco de pt2: " << pt3 << endl;
    cout << "Endereco de pt3: " << &pt3 << endl;
}