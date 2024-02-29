#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int hora, minuto, dia, mes, ano;
    
    cin >> hora;
    cin >> minuto;
    cin >> dia;
    cin >> mes;
    cin >> ano;
    
    cout << setfill('0') << setw(2) << hora << ":" << setw(2) << minuto << " " << setw(2) << dia << "/" << setw(2) << mes << "/" << setw(2) << (ano % 100) << endl;
    
    return 0;
}