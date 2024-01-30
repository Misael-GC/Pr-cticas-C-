#include <iostream>

using namespace std;

int main(){
    string Name[5] = {"A", "O", "I", "P", "AA"};

    for (int i = 0; i < 5; i++)
    {
        cout <<Name[i] << endl;
    }
    
    int index = 0;
    while (index < 5)
    {
        cout << Name[index] << endl;
        index++;
    }
    
}