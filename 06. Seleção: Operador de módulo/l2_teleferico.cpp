#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int capacidade_cabine, total_alunos;
    cin >> capacidade_cabine >> total_alunos;
    
    float viagens;
    if(capacidade_cabine > total_alunos){
        viagens = 1;
    }else{
        capacidade_cabine -= 1;
        viagens = float(total_alunos) / capacidade_cabine;
        viagens = ceil(viagens);
    }
    
    cout << viagens << endl;
    
    return 0;
}