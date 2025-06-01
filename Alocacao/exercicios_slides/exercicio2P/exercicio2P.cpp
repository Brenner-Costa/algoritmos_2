#include <iostream>
using namespace std;

float prodEscalar(int n, float x[], float y[]) {
    // vetA[i] x vetB[i] -> ProdEscalar
    // Criar um acumulador para ir guardando o valor das operacoes
    // Retornar o valor

    float acumulador = 0;
    for(int i = 0; i < n; i++) {
        acumulador += (x[i] * y[i]);
    }

    return acumulador;
}

int main() {
    /*
        Implemente uma funcao que calcule o produto escalar 
        entre dois vetores do tipo de dados float. No programa
        principal voce deve ler o tamanho n dos vetores, os quais
        devem ser alocados dinamicamente usando new. Depois,
        voce deve ler os dados dos vetores e chamar a funcao para 
        calcular o produto escalar. Por fim, use o operador
        delete para desalocar toda memoria alocada de forma 
        dinamica. Prototipo: 
        float prodEscalar(int n, float x[], float y[]);
        Ex. O produto escalar entre x = [1, 2, 3] e y = [4, 5, 6] e dado 
        
        por:
        x · y = 1 * 4 + 2 * 5 + 3 * 6 = 32.

    */

    int n = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    float *vetX = new float[n];
    float *vetY = new float[n];

    for(int i = 0; i < n; i++){
        cout << endl;
        cout << "posicao " << i << " do vetor X: ";
        cin >> vetX[i];
        cout << "posicao " << i << " do vetor Y: ";
        cin >> vetY[i];
    }

    float result = prodEscalar(n, vetX, vetY);

    cout << "O produto escalar e: " << result << endl;

    delete [] vetX;
    delete [] vetY;

}