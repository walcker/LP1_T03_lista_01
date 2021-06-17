#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

/*void fib_below_n (int n) {
    int x =0, aux;
    int i = 1;
    while (i < n){
      aux = i + x ;
      x = i;
      i = aux;
      cout << i << endl;
    }
}*/

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    int n;
    int x =0, aux;
    int i;

    cout << "entre com o valor." << endl;
    cin >> n; 
    cout << 1 << endl;      

    for(i = 1; i < (n - 3);){
      aux = i + x ;
      x = i;
      i = aux;

      cout << i << endl;

    };

    //int fib_below_n(n);

    //system("pause");
    return 0;
}
