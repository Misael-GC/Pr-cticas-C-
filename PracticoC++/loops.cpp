#include <iostream>

using namespace std;

int main(){
    int Counter = 0;

    //primer loop while:
    while (Counter < 100)
    {
        cout <<Counter<<endl;
        Counter++;
    }
    

    //segundo while:

    bool isHappy = true;
    char input = ' ';

    do
    {
        cout << ":D"    <<endl;
        cout << "Sigues feliz??? (T/F)" <<endl;
        cin >> input ;

        if(input == 'F')
        {
            isHappy = false;
            cout << "Vale, adios entonces :c" << endl;
        }
    } while (isHappy == true);
    
}