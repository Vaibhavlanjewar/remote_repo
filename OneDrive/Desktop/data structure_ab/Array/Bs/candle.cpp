#include <iostream>

using namespace std;

int main() {
    int a, b;
  //cout<<"ENter";
    cin >> a >> b;

    int totalHours = a;

    while (a >= b) {
        int newCandles = a / b;
        totalHours += newCandles;
        a = newCandles + a % b;
    }

    cout << totalHours << endl;

    return 0;
}
