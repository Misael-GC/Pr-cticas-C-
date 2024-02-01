#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5]){
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != HeroPosY)
            {
                cout <<GameMap[j][i];
            }else
            {
                if(j != HeroPosX){
                    cout <<GameMap[j][i];
                }else{
                    cout <<'H';
                }
            }
        }
        cout <<endl;
    }
    cout <<endl;
}


int main(){
    int HeroPosX = 1;
    int HeroPosY = 1;
    bool isGameOver = false;
    char Input = ' ';

    char GameMap [5][5] = {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
        };

     DrawMap(HeroPosX, HeroPosY, GameMap);

    while(isGameOver == false){
        cin >>Input;

        if (Input == 'd')
        {
            HeroPosX = HeroPosX + 1;
        }else if (Input == 'a')
        {
            HeroPosX = HeroPosX - 1;
        }else if (Input == 'p')
        {
            isGameOver = true;
        }else if(Input == 's'){
            HeroPosY = HeroPosY + 1;
        }else if(Input == 'w'){
            HeroPosY = HeroPosY - 1;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);

    }
}
