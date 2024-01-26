#include <iostream>

using namespace std;

char decision;

void Print(string message){
    cout << message << endl;
}

char funcion(){
    cout << "Introduce a,b,c,d:" <<endl;
    cin >> decision;

    if(decision == 'a'){
        
    }
    else if (decision == 'b') {
        // Lógica para la opción b
        Print("Has elegido la opción b: Gastarlo, la vida es una y no quiero perder ninguna experiencia");
    } else if (decision == 'c') {
        // Lógica para la opción c
        Print("Has elegido la opción c: Ahorrar en una financiera con interés como colchón ante eventualidades");
    } else if (decision == 'd') {
        // Lógica para la opción d
        Print("Has elegido la opción d: Comprarte cosas que no necesitas");
    } else {
        // Opción inválida
        Print("Opción no válida");
    }

    //cout << "Tu decisión fue: " << decision << endl;
}


int main()
{
    /* code */
    Print("Oh no! te despiertas un día, eres un adulto de 25 años, y tienes que tomar decisiones con el dinero que tienes");
    Print("¿Qué decision tomarías?\n");
    Print("opción a (Ahoorrar todo el dinero bajo el colchon)");
    Print("opción b (Vamos a gastarlo la vida es una y no quiero perder ninguna experiencia)");
    Print("opción c(Lo ahorramos en una financiera que me de interes y lo dejo como colchon ante cualquier eventualidad)");
    Print("opción  d(me compro cosas que no necesito)");

 int result = funcion();
    cout << result << endl;
    //return 0;
}
