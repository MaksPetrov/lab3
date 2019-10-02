#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    int t = c;
    c = a;
    a = b;
    b = t;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c;
}
