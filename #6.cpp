#include <iostream>

using namespace std;

int main()
{
    int a, t;
    cout << "a = ";
    cin >> a;
    t = a*a;
    a = t*t;
    a = a*a;
    cout << "a^8 = " << a;
}
