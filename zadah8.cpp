#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double i, n, a, s;
    cout << "Введите n:";
    cin >> n;
    cout << "Введите a:";
    cin >> a;
    for (i=1; i<=n; i++) {
        s=s+1/pow(i,(2*n-2));
    }
    cout << s << endl;
    return 0;

}