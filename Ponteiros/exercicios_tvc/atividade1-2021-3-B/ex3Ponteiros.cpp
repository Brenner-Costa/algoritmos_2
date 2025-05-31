#include <iostream>
using namespace std;

int *removeVal(int vet[], int n, int val, int *t)
{
    // retornar um novo vetor que NAO tenha o valor val
    // Alocar o novo vetor com um numero adequado de posicoes
    // Preciso verificar quantas vezes val aparece no vetor e alocar um vetor de tamanho N-quantVal
    // Armazenar em t o tamanho do novo vetor.
    // Se todos os valores forem iguais a val -> Retornar Null

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] != val)
        {
            count++;
        }
    }

    if (count == 0)
    {
        *t=0;
        // todos os valores sao iguais a val
        return nullptr;
    }

    int *novoVet = new int[*t];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] != val)
        {
            novoVet[j] = vet[i];
            j++;
        }
    }

    *t = count;

    return novoVet;
}

int main()
{
    /*
        LETRA A
        ---------------
        Crie uma funcao int* removeVal(int vet[], int n, int val, int *t);
        que recebe como parametros um vetor de numeros inteiros vet e seu tamanho n e
        um valor val, e retorna um novo vetor com os elementos de vet que sao diferentes
        de val. O novo vetor deve ser alocado com o numero adequado de posicoes. Se
        nao houver nenhum valor diferente de val no vetor, a funcao deve retornar NULL. O
        tamanho do novo vetor deve ser armazenado em t.

        LETRA B
        ----------------
        Crie um programa (funcao main) que aloque um vetor de inteiros com um tamanho
        lido do teclado. Em seguida, faca a leitura dos elementos do vetor, alem da leitura de
        um valor inteiro, e chame a funcao removeVal. Ao final, imprima os elementos do
        vetor retornado. Certifique-se de que toda memoria seja apropriadamente
        desalocada ao final do programa.
    */

    int tam = 0, rVal = 0, novoTam = 0;
    cout << "Digite um tamanho para o vetor: ";
    cin >> tam;

    int *vet = new int[tam];

    cout << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "Digite o valor da posicao " << i << " do vetor: ";
        cin >> vet[i];
    }

    cout << endl;
    cout << "Digite um valor para ser REMOVIDO do vetor: ";
    cin >> rVal;
    cout << endl;

    int *result = removeVal(vet, tam, rVal, &novoTam);

    if(result == nullptr) {
        cout << "Todos os valores sao iguais a " << rVal << "..." << endl;
    } else {
        cout << "Percorrendo o NOVO vetor sem o valor " << rVal << "..." << endl;
        for (int i = 0; i < novoTam; i++)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;

    cout << "Desalocando os vetores..." << endl;
    delete[] vet;
    if (result != NULL) {
        delete[] result;
    }

    cout << endl;
}