#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Inverted triangle" << endl;

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
 