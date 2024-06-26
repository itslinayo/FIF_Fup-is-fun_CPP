#include <iostream>

using namespace std;

int main()
{
    //dois int com b>a
    int a, b;
    cin >> a >> b;

    if (b < a)
    {
        cout << "invalido" << endl;
        return 1;
    }

    //num par divisível por 3
    //delimitar intervalo com for
    int soma{};
    for(int i = a; i <= b; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            soma += i;
        }
    }
    
    cout << soma << endl;

    return 0;
}