#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float ap1, ap2, ap3, trab;
    cin >> ap1 >> ap2 >> ap3 >> trab;

    float soma_notas = ap1 + ap2 + ap3;
    float menor;

    if (ap1 < ap2 && ap1 < ap3)
    {
        menor = ap1;
    }
    else if (ap2 < ap1 && ap2 < ap3)
    {
        menor = ap2;
    }
    else
    {
        menor = ap3;
    }

    //soma das três notas menos a menor nota
    soma_notas = soma_notas - menor;

    float media = (soma_notas + trab) / 3;

    if (media >= 7)
    {
        cout << "Aprovado com " << fixed << setprecision(1)
             << media << endl;
    }
    else
    {
        cout << "Final com " << fixed << setprecision(1)
             << media << endl;
    }
    
    return 0;
}