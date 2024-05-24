#include <iostream>

using namespace std;

int converterAngulo(int angulo) {
    // Normaliza o ângulo para o intervalo de 0 a 359
    int anguloNormalizado = angulo % 360;

    // Se o ângulo for negativo, ajusta para o equivalente positivo
    if (anguloNormalizado < 0) {
        anguloNormalizado += 360;
    }

    return anguloNormalizado;
}

int main() {
    int angulo;
    cin >> angulo;

    int anguloCartesiano = converterAngulo(angulo);
    cout << anguloCartesiano << endl;
    
    return 0;
}