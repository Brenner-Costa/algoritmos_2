#include <iostream>
using namespace std;

int main() {

    /*
    Faca um programa que realize as seguintes operacoes:
    ▶ Declare um ponteiro para inteiro pt.
    ▶ Imprima o endereco de pt.
    ▶ Crie uma variavel inteira x.
    ▶ Leia um valor para x.
    ▶ Faca com que pt aponte para x.
    ▶ Imprima o conteudo da variavel pt.
    ▶ Imprima o endereco de x.
    ▶ Usando apenas o ponteiro pt multiplique x por 10 e altere o seu valor.
    ▶ Imprima o conteudo apontado por pt.
    ▶ Some 10 a variavel pt.
    ▶ Imprima o seu conteudo novamente. Qual o significado desta saida?
    
    */
    cout << "Exercicio 1 - Ponteiros" << endl;

    int *pt;
    int x = 10;
    cout << "Endereco de memoria de pt: " << &pt << endl;

    //pt apontando para X
    pt = &x;
    cout << "Imprimindo conteudo de pt: " << pt << endl;
    cout << "Imprimindo endereco de X: " << &x << endl;

    *pt = *pt * 10;

    cout << "Imprimindo conteudo ATUALIZADO de pt: " << *pt << endl;
    cout << "Imprimindo conteudo ATUALIZADO de X: " << x << endl;

    cout << "Somando 10 a variavel pt: " << pt+10 << endl;
    cout << "Imprimindo conteudo de pt: " << pt << endl;
    
    return 0;
}   