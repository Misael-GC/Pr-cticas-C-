#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* code */
    union numero_letra
    {
        int numero;
        char letra;
    };
    numero_letra x = {'A'};

    cout << "X como un numero: " << (char)x.numero << endl;
    cout << "X como una letra: " << (int)x.letra << endl;

    enum dias_semana {lunes = 'l', martes = 'm', miercoles = 'i', jueves = 'j', viernes = 'v'};

    dias_semana dia = viernes;

    cout << (char) dia;
}
