#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //crear el archivo y lo guarde en una ubicación
    ofstream myFile("gameData.txt"); //ofstream salida de datos
    string PlayerName = "";

    if(myFile.is_open())
    {
        myFile<<"Hi Platzi"<<endl;
        myFile<<"Mi nombre es"<<endl;

        cout << "Ingrese su nombre: "<<endl;
        cin >> PlayerName;
        myFile << PlayerName;
    }
    myFile.close();

    ifstream myFileRead("gameData.txt");//entrada de datos
    string line;
    string NombreDelHeroe = "";
    int Renglon = 0;

    if(myFileRead.is_open()){
       while (getline(myFileRead, line))
       {
          //cout << line << endl;
         if(Renglon == 2){
           NombreDelHeroe = line;
         }
         Renglon++;
       }
       
    }else{
        cout<<"Error al abrir el archivo, checar el antivirus";
    }
    cout << "WELCOME TO YOUR ADVENTURE" << endl;
    cout << "YOUR HERO IS : "<<NombreDelHeroe<<endl;
    return 0;
}
