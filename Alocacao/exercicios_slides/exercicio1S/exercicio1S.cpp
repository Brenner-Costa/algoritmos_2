#include <iostream>
using namespace std;

float* alocaVetor(int n) {
    float *vet = new float[n];

    for(int i = 0; i < n; i++){
        cout << "posicao " << i << ": ";
        cin >> vet[i];
    }

    return vet;
}

int calcMedia(float vet[], int n, float *soma) {
    for(int i = 0; i < n; i++){
        *soma = *soma += vet[i];
    }

    return *soma/n; 
} 


int main() {
    /*
    
    1. Faca um programa que leia um numero inteiro N e que
    aloque dinamicamente um vetor com N elementos reais e
    faca a leitura dos seus valores. Em seguida, calcule a
    media dos valores do vetor e imprima na tela. Por fim, 
    libere a memoria alocada de forma dinamica.
    --------------------------------------------------------
    2. Modifique o exercicio anterior e crie uma funcao para 
    realizar a tarefa de calcular a media dos elementos do 
    vetor. Prototipo: 
    float calcMedia(int n, float vet[]);
    --------------------------------------------------------
    3. Modifique o exercicio anterior e crie agora uma funcao 
    para alocar vetores de numeros reais de tamanho N de
    forma dinamica. Prototipo: 
    float* alocaVetor(int n);

    */

    int n = 0; 
    float soma = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    
    float *vetAlocado =  alocaVetor(n);
    float result = calcMedia(vetAlocado, n, &soma);

    cout << "Valor da media e: " << result << endl;

    if(vetAlocado != NULL) {
        delete [] vetAlocado;
    }
}