#include <iostream>
using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    cout << endl;
    for (int i = 0; i < tam; i++)
    {
        if(vet[i] < 0) {
            *negativos = *negativos + 1;
        }

        if(vet[i] % 2 == 0){
            *par = *par + 1;
        } else {
            *impar = *impar + 1;
        }
    }

    if(*negativos > 0){
        cout << "Existem negativos!" << endl;
        cout << endl;
        return true;
    }
    cout << "Nao existem valores negativos!" << endl;
    cout << endl;
    return false;
}

int main()
{
    /*
    Implemente uma unica funcao que receba um vetor de
    numeros inteiros (vet) e o seu tamanho (tam) e:
    ▶ conte o total de elementos pares;
    ▶ conte o total de elementos impares;
    ▶ conte o total de elementos negativos;
    ▶ retorne verdadeiro se existirem numeros negativos no
    vetor, ou retorne falso, caso contrario.
    Considere o seguinte prototipo:
    bool func(int tam, int vet[], int *par, int *impar, int *negativos);
    */
   
   int tam = 5, par = 0, impar = 0, negativos = 0;
   int *vet = new int[tam];
   
   for (int i = 0; i < tam; i++)
   {
       cout << "Digite o valor de " << i << ": ";
       cin >> vet[i];
    }
    
    bool result = func(tam, vet, &par, &impar, &negativos);
    
    cout << "Quantidade de valores PARES: " << par << endl;
    cout << "Quantidade de valores IMPARES: " << impar << endl;
    cout << "Existem valores negativos? (1 = Sim | 0 = Nao) ->  " << result << endl;
    
    delete[] vet;
}