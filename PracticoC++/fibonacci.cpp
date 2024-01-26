
#include <iostream>

using namespace std;

int fibonacci(int n){

    if (n <= 1)
    {
        return 1;
    }
    else{
       int result =  fibonacci(n-1) + fibonacci(n-2);
        return result;
    }
}

int main()
{
    int result = fibonacci(7);
    cout << result << endl;
    return 0;
}

