#include <iostream>

using namespace std;

class Human
{
public:
    Human(int SpawnAge)
    {
        Age = SpawnAge;
    }

    void Think() //pensar puede tener varias ramas y las pondremos en el arera privada
    {
        cout << GetThinkMessage() << endl;
    }

    int Age;

private:

    int SocialLevel;
    int Inteligence;
    int Luck;

//se va a imprimir de acuerdo a los valores del humano, es vivado porque la idea es que el user no vea está información, el user solo va ver piensa

    string GetThinkMessage()
    {
        if (SocialLevel && Inteligence > 100)
        {
            return "Estoy teniendo pensamientos felices :D";
        }
        else if (Luck > Inteligence)
        {
            return "Soy un suertudo!";
        }
        else if (Age > 18)
        {
            return "Soy un bebe";
        }else{
            return ":0";
        }

    }
};


int main()
{
    Human Bob(19);

    Bob.Think(); //No sabemos que está pasando
    return 0;
}