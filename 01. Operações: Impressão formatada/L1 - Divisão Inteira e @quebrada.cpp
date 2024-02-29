#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n1 = 0;
    int n2 = 0;
    int resultadoInteiro, resto;
    float resultadoQuebrado;

    cin >> n1;
    cin >> n2;

    if (n2 == 0) {
        return 1;
    }

    resultadoInteiro = n1 / n2;
    resultadoQuebrado = static_cast<float>(n1) / n2; 
    resto = n1 % n2;

    cout << resultadoInteiro << endl;
    cout << resto << endl;
    
    cout << fixed << setprecision(2);
    cout << resultadoQuebrado << endl;

    return 0;
}
