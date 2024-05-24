#include <iostream>

using namespace std;

int main(){
    
    int n1, n2;
    cin >> n1 >> n2;
    
    if(n1 % 3 == 0 && n2 % 3 == 0 || n1 % 5 == 0 && n2 % 5 == 0){
        cout << "sim" << endl;
    }else{
        cout << "nao" << endl;
    }
    
    return 0;
}