#include <iostream>
using namespace std;

int* redimensiona(int vet[], int tam, int novo){
    //Se o tamanho NOVO for menor ou igual ao tamanho antigo -> Nada e retorna o vetor original
    //Alocar um novo vetor com a quantidade nova -> copiar os elementos do vet antigo para o novo
    //depois de copiar tudo -> preencher com zero

    if(novo <= tam){
        cout << "Retornando vetor antigo..." << endl;
        return vet;
    }

    int *novoVet = new int[novo];

    int j = 0;
    for(int i = 0; i < novo; i++){
        if(i < tam) {
            novoVet[j] = vet[i];
            j++;
        } else {
            novoVet[j] = 0;
            j++;
        }
    }

    return novoVet;
}

int main() {
    /*
        Crie uma funcao que recebe um vetor vet com seu
        tamanho tam e um novo tamanho novo para alocacao. Se 
        o novo tamanho for menor ou igual ao tamanho original,
        nada deve ser feito e o vetor original deve ser retornado.
        Caso contrario, a funcao deve alocar e retornar um novo 
        vetor, preservando as informacoes do vetor original e 
        inicializando as posicoes restantes com zero. 
        
        Prototipo: 
        int* redimensiona(int vet[], int tam, int novo);

        Faca um programa que aloque um vetor de inteiros com
        um tamanho lido do teclado. Em seguida, faca a leitura
        dos elementos do vetor e chame a funcao redimensiona,
        passando como terceiro argumento um segundo tamanho,
        tambem lido do teclado. Ao final, imprima o vetor 
        modificado. Certifique-se de que toda memoria e 
        apropriadamente desalocada ao final do programa.
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