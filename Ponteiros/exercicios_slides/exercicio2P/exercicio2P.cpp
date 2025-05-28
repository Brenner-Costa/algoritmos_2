#include <iostream>
using namespace std;

int main()
{

    /*
    Dadas as declaracoes e inicializacoes abaixo:
    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    Faca o que se pede nos itens a seguir:
    ▶ Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    ▶ Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores de seus indices somados de 1.
    ▶ Imprima os conteudos do vetor e das variaveis a, b e c.
    ▶ Usando pti, atribua a variavel a o valor da primeira posicao do vetor acrescido de 99.
    ▶ Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos valores de a e b.
    ▶ Atribua a segunda posicao do vetor o conteudo apontado por pti2.
    ▶ Usando aritmetica de ponteiros, atribua a terceira posicao do vetor o conteudo apontado por pti.
    ▶ Usando ponteiros, incremente o valor de b e decremente o valor da segunda posicao do vetor.
    ▶ Novamente, imprima os conteudos do vetor e das variaveis a, b e c.

    */

    int a = 10, b = 20, c = 30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    // ▶ Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    *pti1 = c;
    *pti2 = c;

    // ▶ Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores de seus indices somados de 1.
    cout << endl;
    cout << "Preenchendo o vetor..." << endl;
    for (int i = 0; i < 3; i++)
    {
        v[i] = i; // inicializei o vetor com o valor do seu indice
    }

    pti1 = v; // Apontei para a primeira posicao

    for (int i = 0; i < 3; i++)
    {
        *pti1 = *pti1 + 1; // somei 1 ao valor da posicao zero
        pti1 = pti1 + 1;   // Andei com o pti1 para a proxima posicao de memoria pertencente ao vetor
    }

    cout << "Vetor preenchido usando aritmetica de ponteiro..." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Posicao " << i << " - Valor: " << v[i] << endl;
    }

    // ▶ Imprima os conteudos do vetor e das variaveis a, b e c.

    // Ja imprimi os valores do vetor anteriormente, vou imprimir apenas o valor das variaveis
    cout << endl;
    cout << "Variavel A - " << a << endl;
    cout << "Variavel B - " << b << endl;
    cout << "Variavel C - " << c << endl;
    cout << endl;

    // ▶ Usando pti, atribua a variavel a o valor da primeira posicao do vetor acrescido de 99.
    pti = &a; // pti aponta para a variavel A
    pti2 = v; // pti2 aponta para a primeira posicao do vetor

    *pti = *pti2 + 99; // O conteudo de pti1 esta sendo atualizado com o valor do conteudo apontado por pti2 + 99
    cout << "Novo valor da variavel A usando aritmetica de ponteiros: " << a << endl;
    cout << endl;

    // ▶ Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos valores de a e b.

    pti1 = &a;
    pti2 = &b;
    cout << "Valor da primeira posicao do vetor v[0] - ANTES: " << v[0] << endl;
    v[0] = *pti1 + *pti2;
    cout << "Atualizando o valor da primeira posicao do vetor..." << endl;
    cout << "Valor da primeira posicao do vetor v[0] - DEPOIS: " << v[0] << endl;
    cout << endl;

    // ▶ Atribua a segunda posicao do vetor o conteudo apontado por pti2.

    pti = v; // apontando para a primeira posicao do vetor
    cout << "Valor da segunda posicao do vetor - ANTES: " << *(pti + 1) << endl;
    *(pti + 1) = *pti2; // atualizando o valor da segunda posicao do vetor
    cout << "Valor da segunda posicao do vetor - DEPOIS: " << *(pti + 1) << endl;
    cout << endl;

    // ▶ Usando aritmetica de ponteiros, atribua a terceira posicao do vetor o conteudo apontado por pti.

    cout << "Conteudo apontado por pti: " << *pti << endl;
    cout << "Terceira posicao do vetor - ANTES: " << *(pti + 2) << endl;
    *(pti + 2) = *pti;
    cout << "Terceira posicao do vetor - DEPOIS: " << *(pti + 2) << endl;
    cout << endl;

    // ▶ Usando ponteiros, incremente o valor de b e decremente o valor da segunda posicao do vetor.
    
    // Vou incrementar 10 e decrementar 10
    pti1 = &b;
    cout << "Valor do B - ANTES: " << b << endl;
    *pti1 = *pti1 - 10;
    cout << "Valor do B - DEPOIS: " << b << endl;

    
    pti2 = v;
    cout << "Valor da segunda do vetor - ANTES: " << v[1] << endl;
    *(pti2+1) = *(pti2+1) - 10;
    cout << "Valor da segunda do vetor - DEPOIS: " << *(pti2+1) << endl;
    cout << endl;

    //▶ Novamente, imprima os conteudos do vetor e das variaveis a, b e c.

    cout << "Imprimindo NOVAMENTE o vetor..." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Valor da posicao " << i << " do vetor: " << v[i] << endl;
    }
    cout << endl;
    cout << "Imprimindo NOVAMENTE os valores das variaveis: " << endl;
    cout << "Variavel A - " << a << endl;
    cout << "Variavel B - " << b << endl;
    cout << "Variavel C - " << c << endl;
    cout << endl;
}