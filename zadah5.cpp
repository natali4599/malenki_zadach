#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double i, n;
    double p=1;
    cout << "Введите n:";
    cin >> n;
    for (i=2; i<=n; i++) {
        p=p*(1-(1/pow(i,2)));
    }
    cout << p <<endl;
    return 0;
}