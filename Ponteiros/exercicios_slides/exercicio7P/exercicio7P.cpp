#include <iostream>
using namespace std;

void troca(int *a, int *b)
{
    cout << endl;
    cout << "Trocando os valores..." << *a << " : " << *b << endl;
     
    int val = *a;
    *a = *b;
    *b = val;
}

void inverte(int vet[], int n)
{
    //Pegar o valor da posicao 0 do vetor usando i
    //Pegar o valor da ultima posicao do vetor usando J = N-1
    
    //j comeca em N-1 -> vai diminuindo
    //i comeca em 0 e vai aumentando

    // Para Pares -> Quando J e I forem iguais, sair do for com break
    // Para Impares -> Se o i+1 for igual ao J -> Significa que é o último valor para ser trocado.
    // Realizar apenas mais uma troca e dar break.
 
    int j = n-1;

    cout << endl;
    cout << "Imprimindo o vetor ANTES da troca..." << endl;
    for(int i = 0; i < n; i++){
        cout << "Posicao " << i << ": " << vet[i] << endl;
    }

    for(int i = 0; i < n; i++){
        if(i == j) {
            break;
        }else if(i+1 == j || j-1 == i) {
            troca(&vet[i], &vet[j]); //Ultimo valor para ser trocado
            break;
        }else {
            troca(&vet[i], &vet[j]);
            j--;
        }
    }

    cout << endl;
    cout << "Imprimindo o vetor DEPOIS da troca..." << endl;
    for(int i = 0; i < n; i++){
        cout << "Posicao " << i << ": " << vet[i] << endl;
    }
}

int main()
{
    /*
        Crie uma funcao que recebe como parametro um vetor
        vet de elementos inteiros e seu tamanho n. Utilizando
        obrigatoriamente a funcao troca (Exercicio 4), a funcao
        deve inverter os elementos dentro do vetor original vet,
        trocando o primeiro elemento com o ultimo, o segundo
        com o penultimo, e assim por diante. Faca um programa
        que utilize sua funcao para inverter os elementos de um
        vetor. Depois, imprima o vetor invertido. Considere o
        seguinte prototipo:
        void inverte(int vet[], int n);

    */

    int n = 6;
    int *vet = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o valor de " << i << ": ";
        cin >> vet[i];
    }

    inverte(vet, n);

    delete[] vet;
}