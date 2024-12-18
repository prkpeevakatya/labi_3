#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

    int remake(int x, int i) {
        return x | (1 << i);
    }

    int main() {
        setlocale(LC_ALL, "Russian");
        int x, i;
        cin >> x;
        cin >> i;

        int qw = remake(x, i);

        cout << "Результат после установки " << i << "-го бита: " << qw << endl;

        return 0;
    }
