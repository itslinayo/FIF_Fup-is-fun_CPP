#include <iostream>

using namespace std;

int main() {
    
    bool wifi, login, admin;
    cin >> wifi >> login >> admin;

    if (!wifi) {
        cout << "you must connect to wifi" << endl;
    } else if (!login && admin) {
        cout << "you need to login first" << endl;
    } else if (login && !admin) {
        cout << "you must to login as admin" << endl;
    } else if (login && admin) {
        cout << "done" << endl;
    } else {
        cout << "you need to login first" << endl;
    }

    return 0;
}
