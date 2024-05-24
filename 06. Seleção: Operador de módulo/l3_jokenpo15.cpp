#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == B) {
        cout << "Empate" << endl;
    } else {
        // Verifica se A vence B
        if ((B - A + 15) % 15 <= 7 && (B - A + 15) % 15 != 0) {
            cout << "Jogador 1" << endl;
        } else {
            cout << "Jogador 2" << endl;
        }
    }

    return 0;
}
