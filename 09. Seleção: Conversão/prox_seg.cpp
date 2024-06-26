#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int h, m, s;
    cin >> h >> m >> s;

    int total_s = (h * 3600) + (m * 60) + (s) + 1;    
    
    int horas = (total_s / 3600) % 24; //ajusta horas para ficar no intervalo [0, 23]
    int restante = total_s % 3600;
    int minutos = restante / 60;
    int segundos = restante % 60;

    cout << setw(2) << setfill('0') << horas << " ";
    cout << setw(2) << setfill('0') << minutos << " ";
    cout << setw(2) << setfill('0') << segundos << endl;

    return 0;
}