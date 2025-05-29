#include <iostream>
using namespace std;

void divisao(int num, int div, int *q, int *r) {
    *r = num % div;
    *q = num/div;
}

int main() {
    /*

        Dados dois numeros inteiros num e div, faca uma funcao
        para calcular e retornar o quociente e o resto da divisao
        inteira de num por div. Considerar o seguinte prototipo:
        
        void divisao(int num, int div, int *q, int *r);
        
        onde:
        ▶ num e dividendo;
        ▶ div e o divisor;
        ▶ q e o quociente;
        ▶ r e o resto.
    */

    int num = 0, div = 0, q = 0, r = 0;
    cout << "Digite um valor para NUM: ";
    cin >> num;

    cout << "Digite um valor para DIV: ";
    cin >> div;

    divisao(num, div, &q, &r);

    cout << "Quociente: " << q << endl;
    cout << "Resto: " << r << endl;
    
}