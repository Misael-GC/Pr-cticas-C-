#include <iostream>
#include <string>

using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main()
{
    Persona *p = new Persona(); //Reserva memoria, puntero, se crea una persona, se gestiona la memoria de manera dinamica
    //Persona p = Persona(); //CREAMOS UNA VARIABLE TIPO PERSONA QUE NO ES PUNTERO
    p->nombre = "Greñas"; //Asignar a ese valor
    p->edad = 24; //Asignar a ese valor
    cout << p->nombre <<endl;
    cout<<"La persona tiene: "<<p->edad<<endl;
}
