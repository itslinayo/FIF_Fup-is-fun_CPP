#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    int sum = n1 + n2 + n3 + n4;

    if (sum == 0) {
        cout << "nenhum" << endl;
    } else {
        // Determina o jogador vencedor baseado na soma
        int winner = (sum - 1) % 4 + 1;
        cout << "jog" << winner << endl;
    }
    
    return 0;
}
