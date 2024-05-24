#include <iostream>

using namespace std;

int main (){
    
    int N, D, A;
    cin >> N >> D >> A;
    
    int resp;
    if(D == A){
        resp = 0;
    }else if(D > A){
        resp = D - A;
    }else{
        resp = (N - A) + D;
    }
    
    cout << resp << endl;
    
    return 0;
}