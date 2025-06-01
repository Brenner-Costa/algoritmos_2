#include <iostream>
using namespace std;

int *indicesPares(int vet[], int n)
{
    // Alocar um novo vetor e copiar o valor das posicoes PARES
    // O vetor precisa ter o tamanho adequado
    // Para saber se e par -> Verificar o i
    //  Para vetor de tamanho PAR -> n/2;
    //  Para vetor de tamanho IMPAR -> n/2 + 1;
    // Criar um acumulador

    int tam = 0;
    if (n % 2 == 0)
    {
        cout << "Vetor de tamanho PAR..." << endl;
        tam = n / 2;
    }
    else
    {
        cout << "Vetor de tamanho IMPAR..." << endl;
        tam = (n / 2) + 1;
    }

    int *novoVet = new int[tam];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            novoVet[j] = vet[i];
            j++;
        }
    }

    return novoVet;
}

int main()
{
    /*
    Crie uma funcao que recebe como parametro um vetor
    vet de inteiros e seu tamanho n. A funcao deve alocar
    dinamicamente um novo vetor e copiar para este novo
    vetor apenas os elementos das posicoes de indice par do
    vetor original. Ao final, a funcao deve retornar o vetor
    criado. Observacao: o tamanho deste novo vetor criado na
    funcao deve ser o menor possivel para acomodar
    corretamente seus elementos. Considere o prototipo:
    int* indicesPares(int vet[], int n);

    Faca um programa que leia um numero inteiro n e aloque
    dinamicamente um vetor com n elementos inteiros. Faca
    um loop para ler cada um dos valores do vetor. Em
    seguida, utilize a funcao indicesPares para retornar o
    novo vetor, que deve ser impresso na sequencia. Por fim,
    libere toda a memoria alocada dinamicamente.

    */

    int n = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *vet = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "posicao " << i << ": ";
        cin >> vet[i];
    }

    int *result = indicesPares(vet, n);

    cout << endl;
    cout << "Novo vetor..." << endl;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            cout << "posicao " << i << ": " << result[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < (n/2)+1; i++)
        {
            cout << "posicao " << i << ": " << result[i] << endl;
        }
    }

    delete[] vet;

    if (result != NULL)
    {
        delete[] result;
    }
}