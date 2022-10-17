#include <iostream>

using namespace std;

int main() {
    short count = 0;
    short start = -2, fin = 4;
    for (int i = start; i <= fin; ++i) {
        for (int j = start; j <= fin; ++j) {
            if (i * i + 1 == j * j + 1) {
                cout << i << ' ' << j << '\n';
                ++count;
            }
        }
    }
    cout << count;
    return 0;
}
