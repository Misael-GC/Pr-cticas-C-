#include <iostream>

using namespace std;

int main(){
    char Corbatas[5];

    Corbatas[0] = 'v';
    Corbatas[1] = 'n';
    Corbatas[2] = 'p';
    Corbatas[3] = 'r';
    Corbatas[4] = 'f';
    Corbatas[5] = 'v';

    cout << Corbatas[0] << endl;
    cout << Corbatas[1] << endl;
    cout << Corbatas[2] << endl;
    cout << Corbatas[3] << endl;
    cout << Corbatas[4] << endl;
    cout << Corbatas[5] << endl;

    //otra forma de crear string, donde el usuario podra tomar el nombre del indice

    int index = 0;
    cin >> index;
        string Name[4] = {"Asterix", "Idiafix", "Obelix", "Panoramix"};

    string CurrentName = Name[index];

    cout << CurrentName << endl;
    
    return 0;
}