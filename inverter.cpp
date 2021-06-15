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

    int vetor1[5] = {1, 2, 3, 4, 5};
    int vetor2[5];
    int j = 4;

    for(int i = 0; i < 5; i++){
      vetor2[j] = vetor1[i];
      j--;
    }

    for(int i = 0; i <5 ; i++){
      cout << vetor2[i] << endl;
    }

    //system("pause");
    return 0;
}
