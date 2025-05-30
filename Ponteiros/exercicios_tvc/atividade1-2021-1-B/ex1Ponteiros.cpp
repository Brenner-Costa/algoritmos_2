#include <iostream>
using namespace std;

void troca(int *vetA, int *vetB, int tam)
{
    // 2 vetores de mesmo tamanho
    // Percorrer os dois ao mesmo tempo e ir fazendo a troca
    // vetA[i] e vetB[i] --> Trocar
    // Tem que fazer os vetores andar com aritmetica de ponteiros
    // usar aritmetica de ponteiros
    // criar variavel auxiliar
    //  ciclo -> vetA envia o valor para aux -> vetA recebe o valor vindo de vet B -> vetB recebe o valor de aux
    //  Fazer os dois vetores andar para a proxima posicao com vetA + 1

    int aux = 0;

    cout << endl;
    cout << "Imprimindo Vetor A ANTES da troca..." << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vetA[i] << " ";
    }

    cout << endl;
    cout << "Imprimindo Vetor B ANTES da troca..." << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vetB[i] << " ";
    }

    for(int i = 0; i < tam; i++) {
        //fazendo troca
        aux = *vetA;
        *vetA = *vetB;
        *vetB = aux;

        //cout << "Andando para a proxima posicao..." << endl;
        vetA = vetA + 1;
        vetB = vetB + 1;
    }
}

int main()
{
    /*
        LETRA A
        --------------
        Crie uma funcao void troca(int *vetA, int *vetB, int tam); que
        recebe como parametros dois vetores vetA e vetB, ambos com o mesmo tamanho
        tam, e troca todos os elementos entre os vetores, ou seja, os elementos de vetA
        passam a pertencer a vetB, e vice-versa.

        Utilizar obrigatoriamente aritmetica de ponteiros na manipulacao dos vetores.

        LETRA B
        -------------
        Crie um programa (funcao main) que leia um valor inteiro e aloque dinamicamente
        dois vetores de inteiros de tamanho correspondente ao valor lido. Em seguida, faca
        a leitura dos elementos dos dois vetores e chame a funcao troca. Ao final, imprima
        os vetores modificados. Certifique-se de que toda memoria e apropriadamente
        desalocada ao final do programa.
    */

    int tam = 5;
    int *vetA = new int[tam];
    int *vetB = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cout << "VETOR A --> Digite o valor de " << i << ": ";
        cin >> vetA[i];
    }

    cout << endl;

    for (int i = 0; i < tam; i++)
    {
        cout << "VETOR B --> Digite o valor de " << i << ": ";
        cin >> vetB[i];
    }

    troca(vetA, vetB, tam);

    
    cout << endl;
    cout << "Imprimindo Vetor A DEPOIS da troca..." << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vetA[i] << " ";
    }

    cout << endl;
    cout << "Imprimindo Vetor B DEPOIS da troca..." << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vetB[i] << " ";
    }

    cout << endl;
    cout << "Desalocando memoria..." <<endl;
    delete [] vetA;
    delete [] vetB;
}