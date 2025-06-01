#include <iostream>
using namespace std;

int func1(int n, int vet[], int val)
{
    // verificar quant elementos sao maiores que val dentro do vetor
    // Imprimir mensagem para todos os valores que sao maiores que vet

    int maioresVal = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > val)
        {
            cout << "posicao: " << i << " - Valor: " << vet[i] << " - Endereco: " << &vet[i] << endl;
            maioresVal++;
        }
    }

    return maioresVal;
}

int *func2(int n, int vet[], int val, int tam)
{
    // Alocar dinamicamente um novo vetor e copiar os elementos de vet maiores que val para ele
    // Retornar o novo vetor

    if (tam == 0)
    {
        // nenhum valor maior que val
        return NULL;
    }

    int *novoVet = new int[tam];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > val)
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

        5. Crie uma funcao que retorne quantos elementos de um vetor
        vet de inteiros, de tamanho n, sao maiores do que um
        valor val. Essa funcao deve imprimir uma mensagem
        conforme exemplo abaixo para todos os elementos de vet
        que sao maiores que val.

        Em seguida, crie uma funcao
        para alocar um vetor dinamicamente, copiar os elementos
        do vetor vet que sao maiores que val para esse novo
        vetor criado e, ao final, retornar esse vetor criado de forma
        dinamica. Se o vetor nao possuir nenhum elemento maior
        que val, retornar NULL.

        Prototipos:
        int func1(int n, int vet[], int val);
        int* func2(int n, int vet[], int val, int tam);

    */

    int tam = 0, val = 0;
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
    cout << "Digite um valor para val: ";
    cin >> val;

    cout << endl; 

    int resultFunc1 = func1(tam, vet, val);
    int *resultFunc2 = func2(tam, vet, val, resultFunc1);

    if (resultFunc2 == NULL)
    {
        cout << "Nao tem nenhum valor maior que val..." << endl;
    }
    else
    {
        cout << endl;
        cout << "Imprimindo novo vetor..." << endl;
        for (int i = 0; i < resultFunc1; i++)
        {
            cout << resultFunc2[i] << " ";
        }
    }

    delete [] vet;
    if(resultFunc2 != NULL) {
        delete [] resultFunc2;
    }
}