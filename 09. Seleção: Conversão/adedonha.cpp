#include <iostream>

using namespace std;

int main(){
    
    int total;
    cin >> total;

    if (total == 0)
    {
        cout << "joguem de novo" << endl;
    }
    else
    {
        cout << (char) ((total - 1) % 26 + 'a') << endl;
    }

    return 0;
}