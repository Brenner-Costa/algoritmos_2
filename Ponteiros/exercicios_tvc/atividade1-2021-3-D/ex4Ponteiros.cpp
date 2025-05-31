#include <iostream>
using namespace std;

bool *maiorQueProximo(int vet[], int n, int *t)
{
    // tamanho -> N/2
    // alocar e retornar um novo vetor de bool
    // Comparar vet[i] -> vet[i+1] ate que vet[i] seja o ultimo
    // preciso parar no penultimo elemento do vetor -> N - 2
    // O ultimo nao participa

    bool *novoVet = new bool[n-1]; //vai percorrer as N-1 posicoes -> N vai pegar a ultima pois n tem com quem comparar.


    int j = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        if (vet[i] > vet[i + 1])
        {
            novoVet[j] = true;
            j++;
        }
        else
        {
            novoVet[j] = false;
            j++;
        }
    }

    *t = j;
    return novoVet;
}

int main()
{
    /*
        LETRA A
        --------------------------
        Crie uma funcao bool* maiorQueProximo(int vet[], int n, int *t); que
        recebe como parametros um vetor de numeros inteiros vet e seu tamanho n e
        retorna um vetor booleano preenchido da seguinte forma: se o valor de um elemento
        de vet for maior que o elemento da posicao seguinte, o vetor deve ser preenchido
        com true e, caso contrario, deve ser preenchido com false. O novo vetor deve
        ser alocado com o numero adequado de posicoes. O tamanho do novo vetor deve
        ser armazenado em t.

        LETRA B
        ---------------------------
        Crie um programa (funcao main) que aloque um vetor de inteiros com um tamanho
        lido do teclado. Em seguida, faca a leitura dos elementos do vetor e chame a funcao
        maiorQueProximo. Ao final, imprima os elementos do vetor retornado. Certifique-se
        de que toda memoria seja apropriadamente desalocada ao final do programa.

    */

    int tam = 0, novoTam;
    cout << "Digite um tamanho para o vetor: ";
    cin >> tam;

    int *vet = new int[tam];

    cout << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "Digite o valor da posicao " << i << " do vetor: ";
        cin >> vet[i];
    }

    bool *result = maiorQueProximo(vet, tam, &novoTam);

    cout << endl;
    cout << "Tamanho do novo vetor: " << novoTam << endl;
    cout << "Percorrendo o NOVO vetor de bool" << "..." << endl;
    for (int i = 0; i < novoTam; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;
    cout << "Desalocando os vetores..." << endl;
    delete [] vet;
    while(result != NULL) {
        delete [] result;
    }
}