#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

void fib_below_n (int n) {

    int x =0, aux;

    for(int i = 1; i < n;){
      aux = i + x ;
      x = i;
      i = aux;

      cout << i << endl;

    }
}

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    int n;
    int i;

    cout << "entre com o valor." << endl;
    cin >> n;
    cout << 1 << endl;

    fib_below_n(n);

}
