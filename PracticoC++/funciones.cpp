
#include <iostream>

using namespace std;

//void no regresa nada, solo ejecuta los comandos denrtro
/*void PrintCuteMessage(){
    cout << "Eres increible!"<<endl;
    cout << ":D"<<endl;
}
*/

bool IsPlayerDead(int hp){
    if (hp <= 0) {
        return true;
    }else{
        return false;
    }
}

int main()
{
   // PrintCuteMessage();
    int TotalLife = 3;

   if (TotalLife <= 0)
   {
    cout <<"Game Over";
   } else{
    cout <<"Sigue jugando crack";
   }
   
   return 0;
}
