#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h_atual, m_atual, s_atual, h_clock, m_clock, s_clock;
    cin >> h_atual >> m_atual >> s_atual;
    cin >> h_clock >> m_clock >> s_clock;

    // Transformando tudo em segundos
    int segundos_atual = h_atual * 3600 + m_atual * 60 + s_atual;
    int segundos_clock = h_clock * 3600 + m_clock * 60 + s_clock;

    int tempo_seg_restante;
    if (h_atual > h_clock) {
        // Se a hora atual for maior que a do relógio, calculamos o tempo restante até 24 horas
        tempo_seg_restante = (24 * 3600 - segundos_atual) + segundos_clock;
    } else {
        tempo_seg_restante = segundos_clock - segundos_atual;
    }

    // Calculando horas, minutos e segundos restantes
    int h_restante = tempo_seg_restante / 3600;
    int m_restante = (tempo_seg_restante % 3600) / 60;
    int s_restante = tempo_seg_restante % 60;

    cout << setw(2) << setfill('0') << h_restante << " ";
    cout << setw(2) << setfill('0') << m_restante << " ";
    cout << setw(2) << setfill('0') << s_restante << endl;

    return 0;
}
