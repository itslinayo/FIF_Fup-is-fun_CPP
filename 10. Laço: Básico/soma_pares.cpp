#include <iostream>

using namespace std;

int main()
{
    //dois numeros com b > a
    int a, b;
    cin >> a >> b;

    if (b < a)
    {
        cout << "invalido" << endl;
        return 1;
    }

    int soma{};
    for (int i = a; i <= b; i++)
    {
        if(i % 2 == 0)
        {
            soma += i;
        }
    }
    
    cout << soma << endl;

    return 0;
}