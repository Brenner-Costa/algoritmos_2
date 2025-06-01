#include <iostream>
using namespace std;

int calcMedia(int vet[], int n, int *soma) {
    for(int i = 0; i < n; i++){
        *soma = *soma += vet[i];
    }

    return *soma/n; 
} 

int main() {
    /*
        Faca um programa que leia um numero inteiro n e aloque
        um vetor com n inteiros de forma dinamica (use o 
        operador new). Em seguida, o programa deve ler os
        valores do vetor e calcular a media dos elementos desse
        vetor. Por fim, deve desalocar (use o operador delete) a
        memoria usada para armazenar os seus elementos.
    */

    int n = 0, soma = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *vet = new int[n];

    for(int i = 0; i < n; i++){
        cout << "posicao " << i << ": ";
        cin >> vet[i];
    }

    int result = calcMedia(vet, n, &soma);

    cout << "Valor da media e: " << result << endl;

    delete [] vet;
}