#include <iostream>

using namespace std;

int main()
{
	int Direccion = 3509;
    int SegundaDireccion = 1337;

    int* ApuntadorADir;
    ApuntadorADir = &Direccion;
    cout << Direccion <<endl;
    cout << ApuntadorADir<<endl; //número de la dirección del bloque de la RAM, númwero que la compu le pone

    *ApuntadorADir = 3;
    ApuntadorADir = &SegundaDireccion;

    cout<< Direccion << endl;
    cout<< *ApuntadorADir << endl;

	return 0;
}
