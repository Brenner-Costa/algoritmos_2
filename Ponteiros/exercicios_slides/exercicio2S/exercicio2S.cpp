#include <iostream>
using namespace std;

int main() {
    /*
        Faca um programa que realize as seguintes operacoes:
        ▶ Declare uma variavel inteira val.
        ▶ Declare um ponteiro para inteiro ptr.
        ▶ Faca com que ptr aponte para val.
        ▶ Imprima o valor de val e o endereco de memoria dela.
        ▶ Imprima o valor de ptr e o valor apontado por ele.
        ▶ Modifique o valor de val atraves do ponteiro ptr.
        ▶ Crie um novo ponteiro ptr2 e atribua a ele o mesmo valor de ptr.
        ▶ Imprima o valor de ptr2 e o valor apontado por ele.
        ▶ Modifique o valor apontado por ptr2.
        ▶ Imprima o valor de val.
    */

    int val = 0;
    int *ptr = &val;

    cout << "Imprimindo o valor e o endereco de val: " << val << " : " << &val << endl;
    cout << "Imprimindo o valor e o valor apontado por ptr: " << ptr << " : " << *ptr << endl;

    *ptr = 10;

    int *ptr2 = ptr;

    cout << "Imprimindo o valor e o valor apontado por ptr2: " << ptr2 << " : " << *ptr2 << endl;
    *ptr2 = 50;

    cout << "Imprimindo o valor de val: " << val << endl;

    //Basicamente os dois ponteiros estao apontando para val
}