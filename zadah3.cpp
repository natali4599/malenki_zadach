#include <iostream>
using namespace std;

int main() {
double i, n;
double p=0;
cout << "Введите n:";
cin>>n;
for(i=1; i<=n; i++)
{p=p+(2*i)/(2*i+1);
}
cout << "(2/3+(4/5)...+(2*i)/(2*i+1)=" << p << endl;
return 0; 
}
