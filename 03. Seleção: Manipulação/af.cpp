#include <iostream>

using namespace std;

int main() {
    
    int n1;
    int n2;
    cin >> n1 >> n2;

    int media = (n1 + n2) / 2;

    if(media >= 7){
        cout << "aprovado" << endl;
    }else if(media < 4){
        cout << "reprovado" << endl;
    }else{
        int final;
        cin >> final;

        int mediaFinal = (media + final) / 2;

        if (mediaFinal >= 5){
            cout << "aprovado na final" << endl;
        }else{
            cout << "reprovado na final" << endl;
        }
    }
    return 0;
}
