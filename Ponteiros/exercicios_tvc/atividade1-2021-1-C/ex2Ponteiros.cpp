#include <iostream>
using namespace std;

int *redimensiona(int *vet, int tam, int novoTam)
{
    // Se o novo tamanho for menor ou igual ao tam original -> Retornar o vetor normal
    // Alocar um novo vetor com o novo tamanho
    // Passar os dados do vetor antigo para o novo vetor
    // Preencher as posicoes acima do tamanho TAM com zero
    // Ir contando até que o contador seja igual ao tam original -> Apos isso, todas as posicoes devem ser zero.
    // retornar o novo vetor e desalocar ele na main para nao perder ele na memoria.

    if (novoTam <= tam)
    {
        cout << "Retornando o vetor original..." << endl;
        return vet;
    }

    int *novoVet = new int[novoTam];

    for (int i = 0; i < novoTam; i++)
    {
        if (i < tam)
        {
            // copiando os dados do vetor antigo para o novo
            novoVet[i] = vet[i];
        }
        else
        {
            novoVet[i] = 0;
        }
    }

    return novoVet;
}

int main()
{
    /*
        LETRA A
        ---------------
        Crie uma funcao int* redimensiona(int *vet, int tam, int novoTam);
        que recebe como parametros um vetor vet com seu tamanho tam e
        um novo tamanho novoTam para alocacao. Se o novo tamanho for menor ou igual
        ao tamanho original, nada deve ser feito e o vetor original deve ser retornado. Caso
        contrario, a funcao deve alocar e retornar um novo vetor, preservando as
        informacoes do vetor original e inicializando as posicoes restantes com zero.

        LETRA B
        ----------------
        Crie um programa (função main) que aloque um vetor de inteiros com um tamanho
        lido do teclado. Em seguida, faça a leitura dos elementos do vetor e chame a função
        redimensiona, passando como terceiro argumento um segundo tamanho, também
        lido do teclado. Ao final, imprima o vetor modificado. Certifique-se de que toda
        memória é apropriadamente desalocada ao final do programa.
    */

    int tam = 0, novoTam = 0;
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
    cout << "Digite um NOVO tamanho para o vetor: ";
    cin >> novoTam;
    cout << endl;

    int *result = redimensiona(vet, tam, novoTam);

    cout << endl;

    // Se o novoTam for menor que Tam -> Vai retornar o vetor original -> Percorrer ate tam

    if (novoTam < tam)
    {
        cout << "Percorrendo o vetor ORIGINAL..." << endl;
        for (int i = 0; i < tam; i++)
        {
            cout << "Valor da posicao " << i << " do vetor ORIGINAL: " << result[i] << endl;
        }
    }
    else
    {
        cout << "Percorrendo o NOVO vetor..." << endl;
        for (int i = 0; i < novoTam; i++)
        {
            cout << "Valor da posicao " << i << " do vetor NOVO: " << result[i] << endl;
        }
    }

    cout << endl;
    cout << "Desalocando os vetores..." << endl;
    delete[] vet;
    if (result != NULL)
    {
        delete[] result;
    }
}