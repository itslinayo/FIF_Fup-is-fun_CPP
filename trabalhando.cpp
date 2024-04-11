#include <iostream>

using namespace std;

int main() {
    
    int dia, hora, minuto;
    cin >> dia >> hora >> minuto;

    if ((dia >= 2 && dia <= 6) && (hora >= 8 && hora <= 11 || hora >= 14 && hora <= 17) && (minuto >= 0 && minuto <= 59))
    {
        cout << "SIM" << endl;
    }
    else if((dia == 7) && (hora >= 8 && hora <= 11) && (minuto >= 0 && minuto <= 59))
    {
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }

    return 0;
}
