#include <iostream>
using namespace std;

int main() {
    int a, i, n;
    cout << "a=";
    cin >> a;
    n=1;
    for (i=1; i<=a; i++) {
        n=n*i;
    }
    cout << n << endl;
    return 0;
    
}