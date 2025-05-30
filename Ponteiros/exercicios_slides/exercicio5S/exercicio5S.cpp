#include <iostream>
using namespace std;

void trocaMaior(int vet[], int n, int *m)
{

    int *primeiraPosicao = vet;
    *m = *primeiraPosicao; // em teoria o maior inicial e sempre o primeiro.
    int *posiAtual = primeiraPosicao;
    int *posiMaior = primeiraPosicao;

    if (n == 1)
    {
        cout << "Apenas um valor no vetor!" << endl;
        *m = *primeiraPosicao;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (*posiAtual >= *m)
        {
            *m = *posiAtual;
            posiMaior = posiAtual;
            posiAtual = posiAtual + 1;
        }
        else
        {
            posiAtual = posiAtual + 1;
        }
    }

    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;

    int aux = *primeiraPosicao;
    *primeiraPosicao = *posiMaior;
    *posiMaior = aux;


    cout << "Valor do MAIOR: " << *m << endl;
    cout << "Valor da PRIMEIRA posicao (DEPOIS DA TROCA): " << *primeiraPosicao << endl;
    cout << "Valor da posicao do maior (DEPOIS DA TROCA): " << *posiMaior << endl;
    cout << endl;
}

int main()
{
    /*
    Crie uma funcao que recebe como parametros um vetor de
    numeros inteiros vet e seu tamanho n. A funcao deve
    trocar o maior valor do vetor com o valor da primeira
    posicao. Se houver mais de um valor maior, considerar a
    primeira ocorrencia. A troca deve ser realizada utilizando
    aritmetica de ponteiros. O valor do maior elemento do
    vetor deve ser armazenado em m.
    Considere o seguinte prototipo:
    void trocaMaior(int vet[], int n, int *m);
    */

    int tam = 1, maior = 0;
    int *vet = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "Digite o valor de " << i << ": ";
        cin >> vet[i];
    }

    trocaMaior(vet, tam, &maior);

    cout << "-------------------------------------------------------------------" << endl;
    cout << "Maior elemento do vetor: " << maior << endl;

    cout << endl;
    cout << "Exibindo o vetor apos a troca: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "Posicao " << i << ": " << vet[i] << endl;
    }
}