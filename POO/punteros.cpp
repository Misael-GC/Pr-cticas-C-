#include <iostream>
using namespace std;

int main(){
    char letra = 'A';
    char *puntero = &letra;
    //valor del puntero
    //cout << letra;
    //dirección de memoria, convertit a numero
    cout << (int *)&letra <<endl;
    cout << (int *) puntero <<endl; //tenemos la misma dirección de memoria de la variable letra
    cout << *puntero;
} 