#include <iostream>

using namespace std;


class Cat//CLASE LLAMADA CAT
{
public: //lo que pueden conocer porque es PUBLICO
    string Name;

   Cat() // CONSTRUCTOR es la funcion que se llama a la instacia que gato aparece en el mundo
   {
     Name = "Guapo";
   }
   Cat(string iName) // CONSTRUCTOR es la funcion que se llama a la instacia que gato aparece en el mundo
   {
     Name = iName;
   }
  void Meow() //ACCIONES funciones de mi clase y lo que hara es IMPRIMIR
  {
     cout<< Name<< " dice meow "<<endl;
  }
};
int main()
{
    Cat myfirstkitty;
    Cat mysecondkitty("Blacky");

    myfirstkitty.Meow();

    for(int i =0; i<3; i++)
    {
       mysecondkitty.Meow();
    }

    return 0;

}