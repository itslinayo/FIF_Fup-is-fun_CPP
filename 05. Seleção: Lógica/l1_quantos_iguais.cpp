#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    int counter = 0;

    // Verifica se todos os três valores são iguais
    if (n1 == n2 && n2 == n3) {
        counter = 3;
    }
    // Verifica se dois valores são iguais
    else if (n1 == n2 || n2 == n3 || n1 == n3) {
        counter = 2;
    }
    // Se nenhum dos casos acima for verdadeiro, todos os três valores são diferentes, então o contador permanece 0

    cout << counter << endl;

    return 0;
}
