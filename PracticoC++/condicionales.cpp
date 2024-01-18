#include <iostream>

using namespace std;

int main()
{
      int Mate = 0, Biolgia = 0, Fisica = 0, Espanol = 0;
    int prom = 0;

    cout << "Califiacion en Matematicas: " << endl;
    cin >>Mate;

    cout << "Califiacion en Biologia: " << endl;
    cin >>Biolgia;

    cout << "Califiacion en Fisica: " << endl;
    cin >>Fisica;

    cout << "Califiacion en Español: " << endl;
    cin >>Espanol;

    prom = (Mate + Biolgia + Fisica + Espanol) / 4;

    cout << endl <<"Tu promedio fue: "<< prom <<endl;

    switch(prom){
        case 5: cout <<"Reprobado" <<endl;
                break;
        case 6: cout <<"Suficiente" <<endl;
                break;
        case 7: cout <<"Regular" <<endl;
                break;
        case 8: cout <<"Bien!" <<endl;
                break;
        case 9: cout <<"Muy bien!" <<endl;
                break;
        case 10: cout <<"Excelente!" <<endl;
                break;
        default: cout <<"Muy mal."<<endl;
    }

    return 0;
}