
#include <iostream>

using namespace std;

class Dog{
    public:

    Dog(string Name, string BarkType){
        mName = Name;
        mBark = BarkType;
    }

    string GetName(){ // dar acceso a la información aunque no la pueda modificar
        return mName;
    }

    //Si es necesario forzozamente acceder a la información y cambiarla, entonce con lo siguiente
    void SetName(string NewName)
    {
        mName = NewName;
    }

    void Bark(){
        cout << mBark<<endl;
    }

    private:
        string mName;
        string mBark;
};

int main()
{
    Dog PerroUno("Woofers", "berk");

    //Ya podemos modificar el nombre
    PerroUno.SetName("Mailo");
    cout << "Nombre del perro: "<<PerroUno.GetName()<<endl;
    PerroUno.Bark();  //Imprime Mailo en vez de Wo

    Dog PerroDos("Pomodoro", "woof");
    cout << PerroDos.GetName()<<endl;
    PerroDos.Bark();   //Imprime woof


    return 0;
}