#include <iostream>
using namespace std;

int main() {
    int N, X, Y, S;
    char C;
    cin >> N >> X >> Y >> C >> S;

    //Loop para cada segundo de distração
    for(int i = 0; i < S; i++){
        //Movimentar a cabeça da cobra de acordo com a direção
        if (C == 'R'){
            X = (X + 1) % N;
        }else if (C == 'L'){
            X = (X - 1 + N) % N;
        }else if (C == 'U'){
            Y = (Y - 1 + N) % N;
        }else if (C == 'D'){
            Y = (Y + 1) % N;
        }
    }

    cout << X << " " << Y << endl;

    return 0;
}
