#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
    int i, valor, cont = 0;
    for (i = 0; i < SIZE; i++){
        cout << "entre com o valor " << i << endl;
        cin >> valor;
            if (valor < 0){
                cont = cont +1;
            }
    }

    cout << "Temos " << cont << " valores negativos" << endl;

    return 0;
}
