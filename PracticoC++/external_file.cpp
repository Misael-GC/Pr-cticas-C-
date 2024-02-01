#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //crear el archivo y lo guarde en una ubicación
    ofstream myFile("gameData.txt");
    if(myFile.is_open())
    {
        myFile<<"Hi Platzi"<<endl;
        for(int i=0;i<10;i++)
        {
            myFile<<i<<endl;
        }
    }
    myFile.close();
    return 0;
}
