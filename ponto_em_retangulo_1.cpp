#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    int x1 = 1, x2 = 4, y1 = 1, y2 = 4, x, y;

    cout << "Entre com o ponto X para testar se pertence ao Ret�ngulo: " << endl;
    cin >> x;

    cout << "Entre com o ponto Y para testar se pertence ao Ret�ngulo: " << endl;
    cin >> y;

    if(x == x1 || x == x2){
      if(y >= y1 && y <= y2){
        cout << "O ponto esta na borda do ret�ngulo" << endl;
      }else{
        cout << "O ponto esta fora do Ret�ngulo." << endl;
      }
    }else if(y == y1 || y == y2){
      if(x >= x1 && x <= x2){
        cout << "O ponto esta na borda do ret�ngulo" << endl;
      }else{
        cout << "O ponto esta fora do Ret�ngulo." << endl;
      }
    }else if((x > x1 && x< x2) && (y > y1 && y < y2)){
      cout << "O ponto esta dentro do retan�ngulo." << endl;
    }else{
      cout << "O ponto esta fora do Ret�ngulo." << endl;
    }

    return 0;
}
