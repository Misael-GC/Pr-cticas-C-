#include <iostream>

using namespace std;

int main(){
    int ids[5][3] ={
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    for (int i = 0; i < 5; i++)
    {
       for (int p = 0; p < 3; p++)
       {
        cout <<ids[i][p];
       }
       cout << endl;
    }

}
