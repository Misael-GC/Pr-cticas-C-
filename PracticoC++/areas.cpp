#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     cout << "       Calculadora de areas        " << endl;

    cout << "           __________" << endl;
    cout << "          | ________ |" << endl;
    cout << "          ||12345678||" << endl;
    cout << "          |__________|" << endl;
    cout << "          |[M|#|C][-]|" << endl;
    cout << "          |[7|8|9][+]|" << endl;
    cout << "          |[4|5|6][x]|" << endl;
    cout << "          |[1|2|3][%]|" << endl;
    cout << "          |[.|O|:][=]|" << endl;
    cout << "           ----------" << endl;

       cout << endl << endl;
    //Area del circulo
    float radio, area, pi;
    radio = 5;
    pi = 3.1416;
    area = pi * pow(radio,2);
    cout<<area << endl;
    
    // Area de una esfera

    float radioEsfera, areaEsfera, piEsfera;
    radioEsfera = 5;
    piEsfera = 4 * 3.1416;
    areaEsfera = piEsfera * pow(radio,2);
    cout<<areaEsfera << endl;
}


